#include <bits/stdc++.h> 
using namespace std; 
long long a,b,c;
long long dt;
int main()
{
    freopen("AREA3.inp","r",stdin);
    freopen("AREA3.out","w",stdout);
    cin>>a>>b>>c;
    if(a>=b)
    dt=(a-c)/2*c*2+c*b;
    else dt=(a-c)/2*c*2+c*b+1;
    cout<<a*b-dt;
}