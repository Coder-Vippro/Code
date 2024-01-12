#include <bits/stdc++.h>
using namespace std;
long long a,b;
long long n;
long long i=2;
long long kq=1;
long long dem1=0;
int t;
int main()
{
    //freopen("OT233.INP","r",stdin);
    freopen("OT233.OUT","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n=a*b;
        while(i<=n)
        {
            while(n%i==0)
            {
                n=n/i;
                dem1++;
            }
            kq=kq*(dem1+1);
            dem1=0;
            i++;
        }
        cout<<kq<<'\n';
        kq=1;
        dem1=0;
        i=2;
    }
}