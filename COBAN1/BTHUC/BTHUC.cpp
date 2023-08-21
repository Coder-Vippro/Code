#include <bits/stdc++.h> 
using namespace std; 
double a,b;
int main()
{
    freopen("BTHUC.inp","r",stdin);
    freopen("BTHUC.out","w",stdout);
    cin>>a>>b;
    cout<<fixed<<setprecision(3)<<a+b<<'\n';
    cout<<fixed<<setprecision(3)<<a-b<<'\n';
    cout<<fixed<<setprecision(3)<<a*b<<'\n';
    if(b==0)cout<<"0.000";
    else cout<<fixed<<setprecision(3)<<a/b<<'\n';
    return 0;
}