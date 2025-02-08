#include <bits/stdc++.h>
using namespace std;
int n,k;
int dem=0;
int a[200001];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    int l=1,r=1;
    int tong=0;
    while(l<=r && r<=n+1)
    {
        if(tong<=k)
        {
            tong+=a[r];
            r++;
        }
        else if(tong>k)
        {
            tong-=a[l];
            l++;
        }
        else if(tong==k)
        {
            dem++;
            tong-=a[l];
            l++;
        }
        //cout<<tong<<' ';
    }
    cout<<dem;
    return 0;
}