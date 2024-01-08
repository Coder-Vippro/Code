#include <bits/stdc++.h>
using namespace std;
int n,a[20],sl=2,d=0,f[100005];
int lt(int a,int b)
{
    int s=1;
    for(int i=1;i<=b;i++) s*=a;
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("RUTTIEN.inp","r",stdin);
    freopen("RUTTIEN.out","w",stdout);
    cin>>n;
    a[1]=0;a[2]=1;
    for(int i=1;i<=7;i++) {sl++;a[sl]=lt(6,i);}
    for(int i=1;i<=6;i++) {sl++;a[sl]=lt(9,i);}
    for(int i=1;i<=n;i++)
    {
        f[i]=n+1;
        for(int j=1;j<=sl;j++)
            if(i>=a[j]) f[i]=min(f[i],f[i-a[j]]+1);
    }
    cout<<f[n];
    return 0;
}
