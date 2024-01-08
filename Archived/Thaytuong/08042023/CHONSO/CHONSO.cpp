#include <bits/stdc++.h>
using namespace std;
int a[100001],f[100001],g[100001];
int main()
{
    freopen("CHONSO.inp","r",stdin);
    freopen("CHONSO.out","w",stdout);
    int n;
    cin>>n;
    cin>>a[1];
    f[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        f[i]=f[i-1]+a[i];
    }
    for(int i=1;i<=n;i++)
    {
        g[i]=f[i]%n;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if((f[j]-f[i-1])%n==0)
            {
                for(int l=j;l<=i;l++)
                {
                    cout<<a[l]<<' ';
                }
                break;
            }
        }
    }
}