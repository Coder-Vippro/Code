#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    freopen("BCNN.inp","r",stdin);
    freopen("BCNN.out","w",stdout);
    cin>>a>>b;
    cout<<a*b/__gcd(a,b);
}