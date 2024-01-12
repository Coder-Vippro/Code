#include <bits/stdc++.h> 
using namespace std; 
long long a,b;
int main()
{
    freopen("TIMC.inp","r",stdin);
    freopen("TIMC.out","w",stdout);
    cin>>a>>b;
    if(a*b%2==0)
    {
        cout<<1;
    }
    else cout<<2;
}