#include <bits/stdc++.h>

using namespace std;
int n,m;
int main()
{
    freopen("UCLN.inp","r",stdin);
    freopen("UCLN.out","w",stdout);
    cin>>n>>m;
    n=abs(n);
    m=abs(m);
    cout<<__gcd(n,m);
    return 0;
}
