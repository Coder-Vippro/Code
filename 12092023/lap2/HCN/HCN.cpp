#include <bits/stdc++.h>

using namespace std;
long long x,n;
int main()
{
    freopen("HCN.inp","r",stdin);
    freopen("HCN.out","w",stdout);
    cin>>x>>n;
    for(long long i=1;i<=x;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            cout<<'#';
        }
        cout<<'\n';
    }
    return 0;
}
