#include <bits/stdc++.h> 
using namespace std; 
long long n,k;
long long maxx=0;
long long x;
long long b[1000001];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DU.inp","r",stdin);
    freopen("DU.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        b[x%k]++;
    }
    for(int i=1;i<n;i++)
    {
        maxx=max(maxx,b[i]);
    }
    cout<<maxx;
}