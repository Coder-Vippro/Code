const ALLOWED_ORIGINS = ["https://chat.quocanh.shop"];

const ipTimestamps = new Map();
// Track IPs that are blocked until a future time
const blockedIPs = new Map();

async function logToWebhook(request, requestBody, responseBody, webhookUrl, model) {
  const ip = request.headers.get("CF-Connecting-IP") || "Unknown IP";
  const userAgent = request.headers.get("User-Agent") || "Unknown User-Agent";
  const origin = request.headers.get("Origin") || "Unknown Origin";
  const country = request.headers.get("CF-IPCountry") || "Unknown Country";

  const logData = {
    username: "Worker Logger",
    embeds: [
      {
        title: "Incoming Request Logged",
        color: 16711680, // Red color
        fields: [
          { name: "IP Address", value: ip, inline: true },
          { name: "Origin", value: origin, inline: true },
          { name: "Country", value: country, inline: true },
          { name: "User-Agent", value: userAgent, inline: false },
          { name: "Request Body", value: requestBody ? `\`\`\`json\n${requestBody.substring(0, 1000)}\n\`\`\`` : "No Body", inline: false },
          { name: "Response Body", value: responseBody ? `\`\`\`json\n${responseBody.substring(0, 1000)}\n\`\`\`` : "No Response", inline: false },
          { name: "Model", value: model || "Unknown Model", inline: true }
        ],
        timestamp: new Date().toISOString()
      }
    ]
  };

  try {
    const response = await fetch(webhookUrl, {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify(logData)
    });

    if (!response.ok) {
      console.error("Failed to send log to webhook:", response.status, await response.text());
    }
  } catch (err) {
    console.error("Error logging request:", err);
  }
}

export default {
  async fetch(request, env) {
    if (request.method === "OPTIONS") {
      return new Response(null, {
        status: 200,
        headers: {
          "Access-Control-Allow-Origin": "*",  // Or specify your allowed origin
          "Access-Control-Allow-Methods": "GET, POST, OPTIONS",
          "Access-Control-Allow-Headers": "Content-Type, Authorization"
        }
      });
    }

    // Block unwanted User-Agents
    const blockedUserAgents = ["curl", "PostmanRuntime", "SomeBot"];
    const userAgent = request.headers.get("User-Agent") || "";
    if (blockedUserAgents.some(ua => userAgent.toLowerCase().includes(ua.toLowerCase()))) {
      return new Response("Forbidden", { status: 403 });
    }

    const ip = request.headers.get("CF-Connecting-IP") || "";

    // Check if user is still blocked
    const blockedUntil = blockedIPs.get(ip) || 0;
    if (Date.now() < blockedUntil) {
      const remaining = Math.ceil((blockedUntil - Date.now()) / 60000);
      return new Response(
        `You have been blocked for spamming. Please wait ${remaining} more minute(s).`,
        { status: 429 }
      );
    }

    // Simple check: if less than 4s since last request, block for 1 minute
    const lastAccess = ipTimestamps.get(ip) || 0;
    if (Date.now() - lastAccess < 4000) {
      blockedIPs.set(ip, Date.now() + 1 * 60 * 1000);
      return new Response("You have been blocked for 1 minute because of spam.", { status: 429 });
    }
    ipTimestamps.set(ip, Date.now());

    const origin = request.headers.get("Origin");

    if (!ALLOWED_ORIGINS.includes(origin)) {
      return new Response("Forbidden", { status: 403 });
    }

    const requestBody = request.method !== "GET" ? await request.text() : null;

    let model = "Unknown Model";
    if (requestBody) {
      try {
        const parsedBody = JSON.parse(requestBody);
        model = parsedBody.model || model;
      } catch (e) {
        console.error("Failed to parse JSON for model:", e);
      }
    }

    const API_BASE_URL = "https://models.inference.ai.azure.com/chat/completions";
    const API_KEY = env.API_KEY; // Use secret, not a hardcoded value
    const WEBHOOK_URL = env.WEBHOOK_URL; // Same for the webhook URL

    let headers = new Headers(request.headers);
    headers.delete("Authorization");
    headers.set("Authorization", `Bearer ${API_KEY}`);
    headers.set("Content-Type", "application/json");

    const fetchedResponse = await fetch(API_BASE_URL, {
      method: request.method,
      headers: headers,
      body: requestBody,
    });

    // Create a TransformStream to intercept and buffer chunks for logging
    const { readable, writable } = new TransformStream();
    const writer = writable.getWriter();
    const reader = fetchedResponse.body.getReader();
    const logBuffer = [];
    const decoder = new TextDecoder();

    async function pump() {
      while (true) {
        const { done, value } = await reader.read();
        if (done) break;
        logBuffer.push(value);
        await writer.write(value);
      }
      writer.close();
    }
    // Start pumping and keep a handle to when it finishes
    const pumping = pump();

    // Build the streaming response to return immediately
    const streamedResponse = new Response(readable, fetchedResponse);
    streamedResponse.headers.set("Access-Control-Allow-Origin", origin);

    // Once streaming is complete, log the full response
    pumping.then(async () => {
      // Combine all buffered chunks
      const combined = Uint8Array.from(
        logBuffer.reduce((acc, chunk) => [...acc, ...Array.from(chunk)], [])
      );
      const responseBody = decoder.decode(combined);
      await logToWebhook(request, requestBody, responseBody, WEBHOOK_URL, model);
    });

    return streamedResponse;
  }
};