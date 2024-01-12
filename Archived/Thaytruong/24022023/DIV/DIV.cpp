#include <bits/stdc++.h> 
using namespace std; 
int n;
int tcs(int n)
{
    int tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        n=n/10;
    }
    return tong;
}
int main()
{
    freopen("DIV.INP","r",stdin);
    freopen("DIV.OUT","w",stdout);
    cin>>n;
    if(n%tcs(n)==0)cout<<"Yes";
    else cout<<"No";
}