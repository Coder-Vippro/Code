#include <bits/stdc++.h>
using namespace std;
int a[10001];
int tknplonhonbang(int l,int r, int k)
{
    int mid;
    int result=-1e9;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]>=k)
        {
            result=a[mid];
            r=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    return result;
}
int tknpnhohonbang(int l, int r, int k)
{
    int result=-1e9;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]<=k)
        {
            result=a[mid];
            l=mid+1;
        }
        else r=mid-1;
    }
    return result;
}
int tknp(int l,int r,int k)
{
    int result=-1e9;
    int mid;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==k)
        {
            result=a[mid];
            return result;
        }
        else if(a[mid]>k)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return result;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<tknp(1,n,k);
}