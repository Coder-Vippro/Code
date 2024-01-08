#include<bits/stdc++.h>
using namespace std;
double s1,s2,s3;
long long a, b, c;
int main() 
{
    freopen("HHCN.inp","r",stdin);
    freopen("HHCN.out","w",stdout);
    cin >> a >> b >> c;
    s1=sqrt(a*b/c);
    s2=sqrt(a*c/b);
    s3=sqrt(b*c/a);
    cout<<s1*4+s2*4+s3*4;
}