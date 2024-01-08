

#include <bits/stdc++.h> 
using namespace std; 
long long f[1000001][5];
int n;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("FROG2.inp","r",stdin);
    freopen("FROG2.out","w",stdout);
    cin>>n;
    f[1][1]=1,f[1][2]=0,f[1][3]=0;
    f[2][1]=1,f[2][2]=1,f[2][3]=0;
    f[3][1]=2,f[3][2]=0,f[3][3]=1;
    for(int i=4;i<=n;i++)
    {
        f[i][1]=f[i-1][1]+f[i-1][2]+f[i-1][3];
        f[i][2]=f[i-2][2]+f[i-2][3];
        f[i][3]=f[i-3][3];
    }
    cout<<f[n][1]+f[n][2]+f[n][3];
}