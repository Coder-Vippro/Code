#include <bits/stdc++.h>
using namespace std;
long long strength[2000005], prefix[2000005];
int N, X, K;
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("MARIO.INP", "r", stdin);
    freopen("MARIO.OUT", "w", stdout);
    cin >> N >> X >> K;
    X += 1e6;  
    for (int i = 0; i < N; i++) 
    {
        int pos, w;
        cin >> pos >> w;
        pos += 1e6;
        strength[pos] += w;
    }
    for (int i = 1; i < 2000005; i++)prefix[i] = prefix[i - 1] + strength[i];
    long long max_strength = 0;
    for (int i = max(0, X - K); i <= min(2000005 - 1, X + K); i++) {
        int left = max(0, min(X, i - (K - abs(i - X)))); 
        int right = max(left, max(X, i));
        if (left < 0 || right >= 2e6 + 5) continue;
        max_strength = max(max_strength, prefix[right] - (left > 0 ? prefix[left - 1] : 0));
    }
    cout << max_strength;
    return 0;
}
