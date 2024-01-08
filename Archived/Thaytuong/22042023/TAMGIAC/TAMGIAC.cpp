#include <bits/stdc++.h> 
using namespace std; 
long long a,b,c;
int main()
{
    freopen("TAMGIAC.inp","r",stdin);
    freopen("TAMGIAC.out","w",stdout);
    cin>>a>>b>>c;
    if(a*a==b*b+c*c || b*b==a*a+c*c || a*a+b*b==c*c)cout<<"VUONG";
    else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)cout<<"TU";
    else cout<<"NHON";
}