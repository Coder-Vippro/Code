#include <bits/stdc++.h>
using namespace std;
int n,x,k;
int q,h;
int a[100001];
int tknplonhonbang( int k)
{
    int l=1;
    int r=n;
    int mid;
    int result=-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]>=k)
        {
            result=mid;
            r=mid-1;
        }
        if(a[mid]<k)
        {
            l=mid+1;
        }
    }
    return result;
}
int tknplonhon(int k)
{
    int l=1;
    int r=n;
    int mid;
    int result=-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]>k)
        {
            result=mid;
            r=mid-1;
        }
        if(a[mid]<=k) 
        {
            l=mid+1;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cin>>k;
    while(k--)
    {
        cin>>q>>h;
        if(q==0)
        {
            int z=tknplonhonbang(h);
            if(z==-1)cout<<0<<'\n';
            else cout<<n-z+1<<'\n';
        }
        else
        {
            int z=tknplonhon(h);
            if(z==-1)cout<<0<<'\n';
            else cout<<n-z+1<<'\n';
        }
    }
}