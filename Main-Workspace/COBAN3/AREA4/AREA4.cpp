#include <bits/stdc++.h> 
using namespace std; 
double a,b,c;
const double pi=3.14;
int main()
{
    freopen("AREA4.inp","r",stdin);
    freopen("AREA4.out","w",stdout);
    cin>>a>>b>>c;
    double r=(sqrt(c*c-((b-a)/2*(b-a)/2)))/4;
    cout<<fixed<<setprecision(2)<<(a+b)/2*r*4-pi*r*r;

}