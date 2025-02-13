#include <bits/stdc++.h>
#define ll long long    
#define MOD 1000000007
#define N 1000007
using namespace std;
string s;
ll dp[N][13];
int main()
{
    freopen("xauxau.inp", "r", stdin);
    freopen("xauxau.out", "w", stdout);
    cin>>s;
    int n=s.size();
    for(int i=0;i<=n+5;i++)
    {
        for(int j=0;j<13;j++)
        {
            dp[i][j]=0;
        }
    }
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<13;j++)
        {
            if(s[i]=='?')
            {
                for(int k=0;k<10;k++)
                {
                    dp[i+1][(j*10+k)%13]+=dp[i][j];
                    dp[i+1][(j*10+k)%13]%=MOD;
                }
            }
            else 
            {
                int k=s[i]-'0';
                dp[i+1][(j*10+k)%13]+=dp[i][j];
                dp[i+1][(j*10+k)%13]%=MOD;
            }
        }
    }
    cout<<dp[n][5];
}