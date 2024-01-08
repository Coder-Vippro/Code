#include <bits/stdc++.h>
using namespace std;
int a[1000001];
int n;
int tong=0;
int f[1000001];
int kq;
int dem=1;
int main()
{
    freopen("BOTTLES.INP","r",stdin);
    freopen("BOTTLES.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        tong=tong+a[i];
    }
    f[1]=a[1];
    f[2]=a[2];
    f[3]=a[3];
    f[4]=min(f[1],min(f[2],f[3]))+a[4];
    for(int i=4;i<=n;i++)
    {
        f[i]=min(f[i-3],min(f[i-2],f[i-1]))+a[i];
    }
    kq=tong-min(f[n],min(f[n-1],f[n-2]));
    for(int i=2;i<=n;i++)
    {
        if(f[i]!=f[i-1])dem++;
    }
    cout<<dem<<' '<<kq;
    
}