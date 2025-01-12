#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);
    cin>>n>>m;
    int a=__gcd(n,m);
    int dem=0;
    for(int i=1;i<= sqrt(a);i++)
    {
        if(a%i==0)
        {
            dem+=2;
            if(a/i==i)
            {
                dem--;
            }
        }
    }
    cout<<dem;
}