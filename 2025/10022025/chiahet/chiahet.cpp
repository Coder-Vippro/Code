#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d;
long long ans(long long a,long long b, long long c)
{
    long long i=a/b;
    long long j=a/c;
    long long k=a/((b*c)/__gcd(b,c));
    return i+j-k;
}
int main()
{
    freopen("chiahet.inp","r",stdin);
    freopen("chiahet.out","w",stdout);
    cin>>a>>b>>c>>d;
    cout<<(b-a+1)-(ans(b,c,d)-ans(a-1,c,d));
}