#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n,dem=0,dem1=0;
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("SUPPRIME.INP","r",stdin);
    freopen("SUPPRIME.OUT","w",stdout);
    cin>>n;
    sangngto(1000001);
    int i=1;
    while(dem1<n)
    {
        if(p[i]==1)
        {
            dem++;
            if(p[i]==1 && p[dem]==1)
            {
                dem1++;
            }
        }
        else i++;
        if(dem1==n)
        {
            cout<<i;
        }
    }
    return 0;
}