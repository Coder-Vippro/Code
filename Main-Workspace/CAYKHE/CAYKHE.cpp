#include <bits/stdc++.h>
using namespace std;
int n,m,w[1001],v[1001],a[1001];
int l[1001];
int imin;
int maxx=-1e9-1;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();cout.tie();
    freopen("CAYKHE.inp","r",stdin);
    freopen("CAYKHE.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i]>>a[i];
    }
    for(int i=1;i<=m;i++)
    {
        l[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=w[i];j--)
        {
            imin=min(a[i],j/w[i]);
            for(int k=0;k<=imin;k++)
            {
                if(l[j]<l[j-w[i]*k]+v[i]*k)
                l[j]=l[j-w[i]*k]+v[i]*k;
            }
            if(l[j]>maxx)maxx=l[j];
        }
        
    }
    cout<<maxx;
}