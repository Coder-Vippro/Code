#include <bits/stdc++.h>
using namespace std;
int a[100001],f[100001];
int n;
int main()
{
    freopen("LTBN.INP","r",stdin);
    freopen("LTBN.OUT","w",stdout);
    cin>>n;
    f[0]=1;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]==a[i+1])
        f[i]=f[i-1]+1;
        else f[i]=1;
    }
    sort(f+1,f+n+1);
    cout<<f[n];
}