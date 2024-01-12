#include <bits/stdc++.h> 
using namespace std; 
int a[100001];
const int N=1e5;
long long n;
pair<int,int> x[N+5];
long long f[N+5];
long long p[N+5];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("POST.INP","r",stdin);
    freopen("POST.OUT","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>x[i].first;
        x[i].second=i;
    }
    sort(x+1,x+n+1);
    f[0]=0;
    for(long long i=1;i<=n;i++)
    {
        f[i]=f[i-1]+x[i].first;
    }
    for(long long i=1;i<=n;i++)
    {
        p[x[i].second]=f[n]-2*f[i]+i*x[i].first-(n-i)*x[i].first;
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<p[i]<<' ';
    }
    
}