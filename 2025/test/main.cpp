#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
long long n,y,z,x;
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    if(n==0)
    {
        cout<<"Yes\n1 1";
        return 0;
    }
    for(long long y=1;y*y<=n;y++)
    {
        x=n+y*y;
        z=sqrt(x);
        if(z*z==x)
        {
            cout<<"Yes\n";
            cout<<z<<' '<<y;
            return 0;
        }
    }
    cout<<"No";
}