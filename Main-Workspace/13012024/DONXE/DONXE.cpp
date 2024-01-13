#include <bits/stdc++.h>
using namespace std;
int n;
int l,r;
int dem=0;
int main()
{
    freopen("DONXE.inp","r",stdin);
    freopen("DONXE.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r;
        if(l+r+1<60 && l+r+1>=50)dem++;
    }
    if(dem>=2)
    cout<<dem-1;
    else cout<<dem;
}