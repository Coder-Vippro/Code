#include <bits/stdc++.h>
using namespace std;
long long tonguoc(long long n)
{
    long long k=sqrt(n);
    long long tong=0;
    for(long long i=1;i<=k;i++)
    {
        if(n%i==0)
        {
            tong+=i;
            if(i!=n/i)
            {
                tong+=n/i;
            }
        }

    }
    return tong;
}
long long n,x;
int main()
{
    freopen("BOMCHUM.INP","r",stdin);
    freopen("BOMCHUM.OUT","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>x;
        cout<<tonguoc(x)<<' ';
    }
    return 0;
}