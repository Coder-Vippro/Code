#include <bits/stdc++.h> 
using namespace std; 
long long a,b;
int main()
{
    freopen("SEU.inp","r",stdin);
    freopen("SEU.out","w",stdout);
    cin>>a>>b;
    if(a>b)swap(a,b);
    cout<<b/2+b%2<<' '<<a;
}