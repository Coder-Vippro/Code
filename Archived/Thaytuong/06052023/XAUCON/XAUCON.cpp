#include <bits/stdc++.h> 
using namespace std; 
string s;
int n,k;
long long kq=0;
int f[100001];
int a[100001];
int binarysearch(int i,int j)
{
    int l=i,r=j,m,vt=j+1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(f[m]-f[i-1]>=k)
        {
            vt=min(vt,m);
            r=m-1;
        }
        else l=m+1;
    } 
    if(vt==j+1)return 0;
    return vt;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("XAUCON.inp","r",stdin);
    freopen("XAUCON.out","w",stdout);
    cin>>n>>k;
    cin>>s;
    s=' '+s;
    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        f[i]=f[i-1]+s[i];
    }
    for(int i=1;i<=n;i++)
    {
        int j=tknp(i,n);
        if(j>=i)kq=kq+n-j+1;
    }
    cout<<kq;
}