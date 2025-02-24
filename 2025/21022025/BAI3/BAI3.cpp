#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000001];
int tknplonhon(int l,int k)
{
    int r=n;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]>k)
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;

}
int tong=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        int h=abs(m+a[i]);
        int kq=tknplonhon(i,h);
        if(kq!=-1)
        tong+=n-kq+1;
    }
    cout<<tong;
}