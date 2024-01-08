#include <bits/stdc++.h>    
using namespace std; 
int n;
int a[10001];
int f[10001];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CAU4.inp","r",stdin);
    freopen("CAU4.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        f[i]=max(a[i],f[i-1]+a[i]);
    }
    sort(f+1,f+n+1);
    cout<<f[n];
}