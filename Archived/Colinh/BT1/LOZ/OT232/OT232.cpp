#include <bits/stdc++.h>
using namespace std;
long long n;
long long i=2;
long long dem=0;
long long dem2=0;
long long tong=1;
int main()
{
    freopen("OT232.INP","r",stdin);
    freopen("OT232.OUT","w",stdout);
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)dem++;
        while(n%i==0)
        {
            n=n/i;
            dem2++;
        }
        tong=tong*(dem2+1);
        dem2=0;
        i++;
    }
    cout<<tong-dem;
}