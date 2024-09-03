#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
int n,a[100001];
int maxx=-1e9-1;
int dem=0;
int tong=0;
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            dem=max(dem,__gcd(a[i],a[j]));
        }
        tong+=dem;
        dem=0;
    }
    cout<<tong;
} 
