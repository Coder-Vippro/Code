#include <bits/stdc++.h>
using namespace std;
int l,r;
bool kt(int n)
{
    int k=n;
    int tich=1;
    while(n>0)
    {
        tich=tich*(n%10);
        n=n/10;
    }
    if(tich==0)return false;
    if(k%tich==0)return true;
    return false;
}
int dem=0;
int main()
{
    freopen("PRODUCT.inp","r",stdin);
    freopen("PRODUCT.out","w",stdout);
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(kt(i)==true)dem++;
    }
    cout<<dem;
}