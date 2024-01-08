#include <bits/stdc++.h>
using namespace std;
int n,m;
int f[1005][100001];
pair<int,int> a[100001];
int main() 
{
   freopen("BOOKSHOP.INP","r",stdin);
   freopen("BOOKSHOP.OUT","w",stdout);
   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   cin>>n>>m;
   for (int i = 1; i <= n; i++)
   {
        cin>>a[i].second;
   }
   for (int i = 1; i <= n; i++)
   {
        cin>>a[i].first;
   }
   for(int i=1;i<=n;i++)
   {
          f[i][1]=0;
   }
   for(int j=1;j<=m;j++)
   {
          f[1][j]=0;
   }
   for (int i = 1; i <= n; i++) 
   {
        for (int j = 1; j <= m; j++) 
        {
          if(a[i-1].second<=j)
          {
               f[i][j]=max(a[i-1].first+f[i-1][j-a[i-1].second],f[i-1][j]);
          }
          else f[i][j]=f[i-1][j];
        }
   }
   cout<<f[n][m];
   return 0;
}
