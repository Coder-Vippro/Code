#include <bits/stdc++.h> 
using namespace std; 
long long p,q,n;
int main()
{
    freopen("DN.inp","r",stdin);
    freopen("DN.out","w",stdout);
    cin>>q>>p>>n;
    long long h=sqrt(q);
    long long k=sqrt(p);
    cout<<k-h;
    
}