#include <bits/stdc++.h>
using namespace std;
int n,k;
long long a[100001];
long long x;
int main()
{
    freopen("DAUTHAU.inp","r",stdin);
    freopen("DAUTHAU.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[i]=x/2;
    }
    sort(a+1,a+n+1);
    cout<<a[n-k+1]+1;
}