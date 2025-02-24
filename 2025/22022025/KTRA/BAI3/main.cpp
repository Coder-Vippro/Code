#include <bits/stdc++.h>
#define ll long long
const int BASE = 31;
const int MOD = 1e9+7;
const int MAXN = 1e5+5;
int power[MAXN], a[MAXN], b[MAXN];
int tim(int prefix[],int l,int r)
{
    return (prefix[r]-prefix[l-1]*power[r-l+1]%MOD+MOD)%MOD;
}
int n,m;
int prefixA[MAXN],prefixB[MAXN];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    power[0]=1;
    int result=1;
    for(int i=1;i<MAXN;i++)power[i]=(power[i-1]*BASE)%MOD;
    for(int i=1;i<=n;i++)prefixA[i]=(prefixA[i-1]*BASE+a[i])%MOD;
    for(int i=1;i<=m;i++)prefixB[i]=(prefixB[i-1]*BASE+b[i])%MOD;
    unordered_map <int,int> dem;
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j+i-1<=n;j++)
        {
            int h=tim(prefixA,i,j+i-1);
            dem[h]++;
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j+i-1<=m;j++)
        {
            int h=tim(prefixB,i,j+i-1);
            if(dem.find(h)!=dem.end())result+=dem[h];
        }
    }
    cout<<result;
    return 0;
}