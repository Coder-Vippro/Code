#include <bits/stdc++.h>
using namespace std;
bool ktnt(long long n)
{
    if(n<2) return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0) return 0;
    return 1;
}
long long t, n, f[1001], a[1001], m=0;
int main()
{
    freopen("PT.inp","r",stdin);
    freopen("PT.out","w",stdout);
    for(int i=2;i<=1000;i++){
        if(ktnt(i)) {m++;a[m]=i;}
    }
    f[0]=1;
    for(int j=1;j<=m;j++)
        for(int i=1;i<=1000;i++)
            if(i>=a[j]&&f[i-a[j]]>=0) f[i]+=f[i-a[j]];
    cin>>t;
    while(t--) {cin>>n;cout<<f[n]<<'\n';}
    return 0;
}
