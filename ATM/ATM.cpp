#include <iostream>

using namespace std;
int dp[101][10001];
int n, S;
int main() 
{
    cin >> n >> S;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= S; j++) 
        {
            dp[i][j] = 1e9+1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= S; j++) {
        if (j % a[i - 1] == 0) {
            dp[i][j] = j / a[i - 1];
        } else {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - a[i - 1]] + 1);
        }
        }
    }
    cout<<dp[n][S];
    return 0;
}
