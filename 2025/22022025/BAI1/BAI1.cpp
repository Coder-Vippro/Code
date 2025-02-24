#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000001];
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n-1;i++)
    {
        if(a[i]<a[i-1] && a[i]<a[i+1])
        {
            dem++;
        }
    }
    cout<<dem;
}