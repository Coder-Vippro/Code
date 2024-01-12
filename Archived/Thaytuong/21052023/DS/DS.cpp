#include <bits/stdc++.h> 
using namespace std; 
int a[1000001];
int n;
unsigned long long tong1=0;
unsigned long long dem=0;
int main()
{
    freopen("DS.inp","r",stdin);
    freopen("DS.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    tong1=n*(n-1)/2;
    sort(a+1,a+n+1);
    for(int i=2;i<=n;i++)
    {
        if(a[i]==a[i-1])dem++;
    }
    cout<<tong1-dem;
}