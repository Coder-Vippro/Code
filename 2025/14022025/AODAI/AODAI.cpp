#include <bits/stdc++.h>
using namespace std;
int n;
int a[10001];
int dem=0;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("AODAI.INP","r",stdin);
    freopen("AODAI.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    int l=1,r=n;
    while(l<=r)
    {
        int tong=0;
        tong=a[l];
        if(tong==4)
        {
            dem++;
            l++;
            continue;
        }
        while(tong+a[r]<=4)
        {
            tong+=a[r];
            r--;
        }
        dem++;
        l++;
    }
    cout<<dem;
}