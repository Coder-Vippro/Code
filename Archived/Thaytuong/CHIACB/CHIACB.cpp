#include <bits/stdc++.h> 
using namespace std; 
int n,m;
int dem=0;
int main()
{
    freopen("CHIACB.inp","r",stdin);
    freopen("CHIACB.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        dem++;
    }
    cout<<dem;
}