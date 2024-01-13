#include <bits/stdc++.h>
using namespace std;
int n;
int tong1=0;
int tong2=0;
int minn=1e9+1;
int a[1000001];
int main()
{
    freopen("MUAVE.inp","r",stdin);
    freopen("MUAVE.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=n;i>1;i--)tong2+=a[i];
    tong1=0;
    for(int i=1;i<n;i++)
    {
        minn=min(abs(tong1-tong2),minn);
        tong1+=a[i];
        tong2-=a[i+1];
    }
    cout<<minn;
}