#include <bits/stdc++.h> 
using namespace std; 
int n,a,b,c;
int main()
{
    freopen("SOCACH.inp","r",stdin);
    freopen("SOCACH.out","w",stdout);
    cin>>n>>a>>b>>c;
    if(n==3)cout<<a*b*c;
    if(n==4)cout<<a*b*c*(a+b+c-3)/2;
    if(n==5)
    cout<<a*b*c*(c-1)*(c-2)/6+a*c*b*(b-1)*(b-2)/6+b*c*a*(a-1)*(a-2)/6+a*b*(b-1)*c*(c-1)/4+a*b*(a-1)*c*(c-1)/4+a*c*(a-1)*c*(c-1)/4;
}