#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;
int N, M;
vector <vector<long long>> dp;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M;
    vector<long long> S(N+5), T(M+5);
    for(int i = 1; i <= N; i++){
        cin >> S[i];
    }
    for(int j = 1; j <= M; j++){
        cin >> T[j];
    }
    dp.resize(N+2, vector<long long>(M+2, 0));
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            dp[i][j]=(dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1] + MOD)%MOD;
            if(S[i]==T[j])
            {
                dp[i][j]+=(dp[i-1][j-1]+1);
                dp[i][j]%=MOD;
            }
        }
    }
    //long long total = 0;
    cout << dp[N][M]+1;
    return 0;
}