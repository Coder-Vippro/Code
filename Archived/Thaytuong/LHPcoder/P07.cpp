#include <bits/stdc++.h>
using namespace std;
long long n,k,x,y,tong=0;
int main()
{
    cin>>n>>k>>x>>y;
    tong=tong+k*x;
    tong=tong+(n-k)*y;
    cout<<tong;
}