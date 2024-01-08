#include <bits/stdc++.h> 
using namespace std; 
int n,m,a[100005];
int kq;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("ROBOT.inp","r",stdin);
    freopen("ROBOT.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n;i++)cin>>a[i];
    a[n+1]=m;
    sort(a+1,a+n+2);
    kq=a[2]-a[1];
    for(int i=3; i<=n+1 ;i++)
    {
        kq=__gcd(kq,abs(a[i]-a[i-1]));
    }
    cout<<kq;
}