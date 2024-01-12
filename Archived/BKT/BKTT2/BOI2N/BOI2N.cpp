#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    freopen("BOI2N.INP","r",stdin);
    freopen("BOI2N.OUT","w",stdout);
    cin>>n;
    if(n%2==1)
    {
        cout<<n*2;
    }
    else cout<<n;
}