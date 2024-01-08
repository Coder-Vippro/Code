#include <bits/stdc++.h>
using namespace std;
int a[100001],b[100001];
int p[100001][100001];
int n;
vector <int> x;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(j<b[i])
            f[i][j]=f[i-1][j];
            else f[i][j]=max(f[i-1][j],f[i-1][j-b[i]]+a[i]);
        }
    }
    cout<<f[n][m]<<'\n';
    int j=m;
    for(int i=n;i>0;i--)
    {
        if(f[i][j]!=f[i-1][j])
        {
            x.push_back(i);
            j=j-b[i];
        }
    }
    cout<<x.size();<<" ";
    for(int i=x.size()-1;i>=0;i--)
    {
        cout<<x[i]<<' ';
    }   
    return 0;
}