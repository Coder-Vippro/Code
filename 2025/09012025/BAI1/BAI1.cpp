#include <bits/stdc++.h>
using namespace std;
int a[10001];
int b[10001];
int c[10001][10001];
int n;
int main()
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>c[i][j];
            a[j]+=c[i][j];
            b[i]+=c[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i]==b[j])
            {
                ans++;
            }
        }
    }
    cout<<ans;
}