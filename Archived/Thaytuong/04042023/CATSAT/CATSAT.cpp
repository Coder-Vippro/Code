#include <bits/stdc++.h>
using namespace std;
int n,m,a[100001],f[100001];
int main()
{
    freopen("CATSAT.inp","r",stdin);
    freopen("CATSAT.out","w",stdout);
    cin>>n>>m;
    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        f[i]=-1;
    }
    for(int i=1;i<=m;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i-a[j]>=0 && f[i-a[j]]>-1)f[i]=max(f[i],f[i-a[j]]+1);
        }
    }
    cout<<f[n];
}