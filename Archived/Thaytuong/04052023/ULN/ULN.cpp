#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("ULN.inp","r",stdin);
    freopen("ULN.out","w",stdout);
    cin>>n;
    for(int i=n-1;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n-i;
            return 0;
        }
    }
    return 0;
}