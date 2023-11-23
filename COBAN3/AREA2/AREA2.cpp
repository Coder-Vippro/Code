#include <bits/stdc++.h> 
using namespace std; 
const double pi=3.14;
double a;
int main()
{
    freopen("AREA2.inp","r",stdin);
    freopen("AREA2.out","w",stdout);
    cin>>a;
    double r=a/sqrt(3);
    double dttg=sqrt((a*3/2)*(a*3/2-a)*(a*3/2-a)*(a*3/2-a));
    double dthtr=pi*r*r;
    cout<<fixed<<setprecision(2)<<dthtr-dttg;

}