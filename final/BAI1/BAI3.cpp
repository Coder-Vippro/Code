#include <bits/stdc++.h>
using namespace std;
int n;
int a[300005];
int b[300005];
int tknp(int k)
{
    int l=1;
    int r=n;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(b[mid]==k)
        {
            return mid;
        }
        else if(b[mid]>k)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
int maxx=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    for(int i=1;i<=n;i++)
    {
        int h=tknp(a[i]+b[1]);
        if(h!=-1)
        {
            maxx=max(maxx,h-i+1);
        }
    }
    cout<<maxx;
    return 0;
}