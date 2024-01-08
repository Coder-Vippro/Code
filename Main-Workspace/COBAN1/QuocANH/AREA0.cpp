#include <bits/stdc++.h> 
using namespace std; 
double a,b;
const double pi=3.14;
int main()
{
    freopen("AREA0.inp","r",stdin);
    freopen("AREA0.out","w",stdout);
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<<a*b-(a/2)*(a/2)*pi;
    return 0;
}