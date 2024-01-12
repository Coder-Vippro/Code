#include <bits/stdc++.h> 
using namespace std; 
long long n,k;
int kt(long long n)
{
    int dem=0;
    while(n>0)
    {
        if(n%10==5)dem++;
        n=n/10;
    }
    return dem;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("MAYMAN.inp","r",stdin);
    freopen("MAYMAN.out","w",stdout);
    cin>>n>>k;
    while(kt(n)!=k)
    {
        n++;
    }
    cout<<n;
}