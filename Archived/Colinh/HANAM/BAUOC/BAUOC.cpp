#include <bits/stdc++.h>
using namespace std;
int n;
int dem=0;
int main()
{
    freopen("BAUOC.INP","r",stdin);
    freopen("BAUOC.OUT","w",stdout);
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int k=sqrt(i);
        if(k*k==i)dem++;
    }
    cout<<dem;
}