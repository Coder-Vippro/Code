#include <bits/stdc++.h> 
using namespace std; 
long long a,b,c;
int main()
{
    freopen("AREA3.inp","r",stdin);
    freopen("AREA3.out","w",stdout);
    cin>>b>>a>>c;
    long long dt=(a-c)/2*c*2+c*b;
    cout<<a*b-dt;
}