#include <bits/stdc++.h> 
using namespace std; 
int a[100001];
int ans(int k) 
{
    int l=0;
    int r=0;
    int tong = 0;
    int kq = 0;
    for (int i = 1; i <= n; i++) 
    {
        tong = (tong + a[i]) % k;
        if (tong % k == 0) 
        {
            l = i;
            r = i;
        }
        if (tong>kq) 
        {
            kq=tong;
        }
    }
    return r-l;
}
int t,d,n;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>d>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i]
        }
    }
}