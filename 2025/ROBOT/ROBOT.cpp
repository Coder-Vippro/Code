#include <bits/stdc++.h>
using namespace std;
vector< vector <int> > a;
vector< vector <unsigned long long> > dp;
int n,m,k;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);
    cin>>n>>m>>k;
    a.resize(n+1,vector<int> (m+1,0));
    dp.resize(n+1,vector<unsigned long long> (m+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    if(k==2)
    {
        dp[1][1]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]==0)
                {
                    dp[i][j]+=dp[i-1][j]+dp[i][j-1];
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        cout<<dp[n][m];
    }
    else if(k==1)cout<<-1;
    return 0;
}