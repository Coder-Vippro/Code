#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[60001];
int dem1=0,dem2=0,dem3=0;
bool check(int a,int b,int c)
{
    return a+b>c && b+c>a && a+c>b;
}
int tknp(int n)
{
    int l=1;
    int r=n;
    int mid=-1;
    while (l<=r)
    {
        mid=(r+l)/2;
        if(a[mid]==n)return mid;
        if(a[mid]>n)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    return mid;
}
int tknplonhonbang(int k)
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
        else 
        {
            l=mid+1;
        }
    }
    return result;
}
int tknpnhohonbang(int k)
{
    int l=1;
    int r=n;
    int result=-1;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]<k)
        {
            result=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CAU5.inp", "r", stdin);
    freopen("CAU5.out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=2;i<=n;i++)
    {
        for(int j=i-1;j<=n;j++)
        {
            int h=sqrt(a[i]*a[i]+a[j]*a[j])
            int q=tknplonhonbang(h);
            if(a[q]!=a[i] && a[q]!=a[j] && check(a[i],a[j],a[q]))
            {
                dem3++;
                return 0;
            }
        }
    }
}