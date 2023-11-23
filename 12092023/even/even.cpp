#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    freopen("even.inp","r",stdin);
    freopen("even.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        if(i%2==0)cout<<i<<' ';
    }
    return 0;
}