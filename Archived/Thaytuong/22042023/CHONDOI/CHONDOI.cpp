#include <bits/stdc++.h>
using namespace std;
long long n,m;
int main() 
{
    freopen("CHONDOI.inp","r",stdin);
    freopen("CHONDOI.out","w",stdout);
    cin>>n>>m;
    cout<<n*(n-1)*(n-2)/6-m*(n-2);
    return 0;
}