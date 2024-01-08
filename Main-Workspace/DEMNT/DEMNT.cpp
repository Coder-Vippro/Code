#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
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
int a,b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("DEMNT.inp","r",stdin);
    freopen("DEMNT.out","w",stdout);
    cin>>a>>b;
    sangngto(b);
    for(int i=a;i<=b;i++)
    {
        if(p[i]==1)
        {
            dem++;
        }
    }
    cout<<dem;
}
