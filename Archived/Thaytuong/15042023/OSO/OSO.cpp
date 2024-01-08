#include <bits/stdc++.h>

using namespace std;
int a[1001][1001];
int n, m, kq;
int main()
{
    freopen("oso.inp","r",stdin);
    freopen("oso.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            kq=a[i-1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j+1]+a[i+1][j]+a[i+1][j-1];
            cout<<kq<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
