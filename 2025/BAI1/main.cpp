#include <bits/stdc++.h>
using namespace std;
int n;
int ans(int n)
{
    if(n<=5)return n*6500;
    else if(n<=15)return 5*6500 + (n-5)*7800;
    else if(n<=25)return 5*6500 + 10*7800 +(n-15)*9200;
    else return 5*6500 + 10*7800 + 25*9200 + (n-26)*10300; 
}
int main()
{
    cin>>n;
    float k=ans(n);
    cout<<fixed<<setprecision(2)<<k<<'\n';
    cout<<fixed<<setprecision(2)<<k*12/100<<'\n';
    cout<<fixed<<setprecision(2)<<k+k*12/100<<'\n';
}