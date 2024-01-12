#include <bits/stdc++.h>
using namespace std;
const double pi=3.14;
double a;
int main()
{
    freopen("AREA1.inp","r",stdin);
    freopen("AREA1.out","w",stdout);
    cin>>a;
    double h=a*sqrt(3)/2;
    const double r=h/3;
    double d=(a*h)/2;
    double c=pi*r*r;
    cout<<fixed<<setprecision(2)<<d-c;
    return 0;
}
