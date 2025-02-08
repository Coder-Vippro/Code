#include <bits/stdc++.h>
using namespace std;
int n;
int a[300005];
map <int,int> mp;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long ans=0;
    long long presum=0;
    mp[0]=1;
    for(int i=1;i<=n;i++)
    {   
        presum = (presum+a[i])%n;
        if(presum<0)
        {
            presum+=n;
        }
        ans+=mp[presum];
        mp[presum]++;
    }
    cout<<ans;
}