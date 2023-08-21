#include <bits/stdc++.h> 
using namespace std; 
long long a,b,c,d;
int main()
{
    freopen("TONG1.inp","r",stdin);
    freopen("TONG1.out","w",stdout);
    cin>>a>>b>>c>>d;
    long long tong=a+b+c+d;
    cout<<tong<<'\n'<<tong/10%10<<' '<<tong%10;
}