#include <bits/stdc++.h>
using namespace std;
long long l[10005],r[10005],a[10005];
int n;
long long ans=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BOBA.INP","r",stdin);
    freopen("BOBA.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[j]<a[i])
            {
                r[i]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[j]>a[i])
            {
                l[i]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        ans+=l[i]*r[i];
    }
    cout<<ans;
}