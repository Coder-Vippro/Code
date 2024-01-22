#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
int x;
int dem=0;
void sangngto (int n) 
{
    fill(p,p+n+1,1); 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
bool kt(int n)
{
    while (n>0)
    {
        if(p[n]!=1)
        {
            return false;
        }
        n=n/10;
    }
    return true;
}
int main()
{
    freopen("SIEUNT.inp","r",stdin);
    freopen("SIEUNT.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    sangngto(1000005);
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(kt(x)==true)
        dem++;
    }
    cout<<dem;
}