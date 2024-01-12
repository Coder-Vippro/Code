#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    freopen("PITAGO.INP","r",stdin);
    freopen("PITAGO.OUT","w",stdout);
    cin>>a>>b>>c;
    if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)
    {
        cout<<"YES";
    }
    else cout<<"KHONG";
}