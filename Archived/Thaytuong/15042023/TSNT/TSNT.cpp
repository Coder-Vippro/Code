#include <bits/stdc++.h>
using namespace std;
int n;
int i=2;
int main()
{
    freopen("TSNT.inp","r",stdin);
    freopen("TSNT.out","w",stdout);
    cin>>n;
    while (i<=n)
    {
        while (n%i==0)
        {
            cout<<i<<' ';
            n=n/i;
        }
        i++;
    }
    return 0;
    
}