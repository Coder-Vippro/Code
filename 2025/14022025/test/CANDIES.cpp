#include <bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int dem=0;
int tong=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CANDIES.INP","r",stdin);
    freopen("CANDIES.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]>0 && a[i]%3==0)
        {
            dem++;
            tong+=a[i]-3;
        }
    }
    cout<<dem<<'\n'<<tong/3;
}