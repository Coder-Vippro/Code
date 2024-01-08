#include <iostream>
#include <cstring>

using namespace std;

const int MOD = 20071008;

int dp[1001][1001];

int main() {
    string a = "xyzabcdgh";
    string b = "ghabxcdyz";

    int len_a = a.length();
    int len_b = b.length();

    memset(dp, 0, sizeof(dp));

    int result = 0;

    for (int i = 1; i <= len_a; i++) {
        for (int j = 1; j <= len_b; j++) {
            if (a[i-1] == b[j-1]) {
                dp[i][j] = (dp[i-1][j-1] + 1) % MOD;
                result = (result + dp[i][j]) % MOD;
            }
        }
    }

    cout << result << endl;

    return 0;
}
