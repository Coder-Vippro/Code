#include <bits/stdc++.h> 
using namespace std; 
long long x,y,n;
int main()
{
    freopen("PIN.INP","r",stdin);
    freopen("PIN.OUT","w",stdout);
    cin>>x>>y>>n;
    if(n<=500)
    {
        cout<<x;
        return 0;
    }
    n=n-500;
    cout<<x+y*n;
}