#include <bits/stdc++.h>
using namespace std;
int n;
long long a[1000001];
long long dp[1000001];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("TANGDAN.INP","r",stdin);
    //freopen("TANGDAN.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        dp[i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]>a[i-1])
        {
            dp[i]=dp[i-1]+1;
        }
        else
        {
            dp[i]=0;
        }
    }
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        if(dp[i]>0)ans+=dp[i]-1;
    }
    cout<<ans;
}