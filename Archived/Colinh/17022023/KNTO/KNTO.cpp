#include <bits/stdc++.h>
using namespace std;
long long n;
long long dem=0;
long long kq=1;
long long dem2=0;
long long i=2;
int main()
{
    freopen("KNTO.INP","r",stdin);
    freopen("KNTO.OUT","w",stdout);
    cin>>n;
    while(i<=n)
    {
        while(n%i==0)
        {
            n=n/i;
            dem++;
        }
        if(dem!=1)dem2++;
        kq=kq*(dem+1);
        dem=0;
        i++;
    }
    kq=kq-dem2;
    cout<<kq;
}