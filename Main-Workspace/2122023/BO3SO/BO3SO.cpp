#include <bits/stdc++.h>
using namespace std;
int n;
long long a[1000001];
long long maxx=-1e9;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BO3SO.inp", "r", stdin);
    freopen("BO3SO.out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            for(int k=1;k<j;k++)
            {
                if(3*a[i]+2*a[j]+a[k]>maxx)
                {
                    maxx=3*a[i]+2*a[j]+a[k];
                }
            }
        }
    }
    cout<<maxx;
}