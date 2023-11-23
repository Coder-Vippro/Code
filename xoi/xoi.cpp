#include <bits/stdc++.h>
#define reset(x) memset(x,0,sizeof(x))
using namespace std;
int n,m,f[205][205];
string s;

int main() 
{
freopen("xoi.inp","r",stdin);
freopen("xoi.out","w",stdout);
cin>>m;
     while(cin>>s)
{
n=s.size(); s='0'+s;reset(f);
for(int i=1;i<=n;i++)f[i][i]=2, f[i][i-1]=1;
for(int i=n-1;i>=1;i--)
for(int j=i+1;j<=n;j++)
{
f[i][j]=(f[i+1][j]+f[i][j-1])%m;
if(s[i]!=s[j])f[i][j]=(f[i][j]-f[i+1][j-1]+m)%m;
}
      		          cout<<f[1][n]<<'\n';
}
return 0;
}