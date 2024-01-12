#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
int main()
{
    freopen("MAX3.inp","r",stdin);
    freopen("MAX3.out","w",stdout);
    cin>>a>>b>>c;
    cout<<max(max(a*b,a*c),b*c);
}