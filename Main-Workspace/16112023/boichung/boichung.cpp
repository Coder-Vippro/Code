#include <bits/stdc++.h> 
using namespace std; 
int n,m;
int main()
{
    freopen("boichung.inp","r",stdin);
    freopen("boichung.out","w",stdout);
    cin>>n>>m;
    for(int i=min(n,m);i<=n*m;i++)
    {
        if(n*m%i==0)
        {
            cout<<i<<' ';
        }
    }
} 