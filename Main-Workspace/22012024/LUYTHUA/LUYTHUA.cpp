#include <bits/stdc++.h>
using namespace std;
unsigned long long a,b,m,n;
unsigned long long mod=1e9;
unsigned long long luythua(unsigned long long a,unsigned long long b)
{
    unsigned long long dem=1;
    for(unsigned long long i=1;i<=b;i++)
    {
        dem*=a;
        dem=dem%mod; 
    }
    return dem;
}
int main()
{
    freopen("LUYTHUA.inp","r",stdin);
    freopen("LUYTHUA.out","w",stdout);
    cin>>a>>b>>n>>m;
    cout<<luythua(a,n)%mod+luythua(b,m)%mod;
}