#include <bits/stdc++.h>

using namespace std;
long long a,b,s,n;
int main()
{
    freopen("TIEN.inp","r",stdin);
    freopen("TIEN.out","w",stdout);
    cin>>a>>b>>s>>n;
    for(long long i=0;i<=n;i++)
    {
        long long k=(n-i);
        long long h=i*a+k*b;
        if(h==s && i+n-i==n){cout<<i<<' '<<n-i;return 0;}
    }
    cout<<-1;
}
