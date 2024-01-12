#include <bits/stdc++.h>
using namespace std;
bool nt(long long n)
{
    if(n<2)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) 
        return false;
    }
    return true;
}
long long t,n,f[100001],a[10001],m=0;
int main()
{
    freopen("PT.INP","r",stdin);
    freopen("PT.OUT","w",stdout);
    for(long long i=2;i<=1000;i++)
    {
        if(nt(i)==true) 
        {
            m++;
            a[m]=i;
        }
    }
    f[0]=1;
    for(long long j=1;j<=m;j++)
        {
            for(int i=1;i<=1000;i++)
            {
                if(i>=a[j] && f[i-a[j]]>=0) 
                {
                    f[i]=f[i]+f[i-a[j]];
                }
            }
        }
    cin>>t;
    while(t--) 
    {
        cin>>n;
        cout<<f[n]<<'\n';
    }
}
