#include <bits/stdc++.h>
using namespace std;
int n,k;
int p[10000001];
int h=0;
int main()
{
    freopen("CHONGOI.inp","r",stdin);
    freopen("CHONGOI.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        p[i]=-1;
    }
    p[n/2]=1;
    p[1]=n;
    for(int i=2;i<=n;i++)
    {
        if(p[i]==-1 && p[i]!=1)
        {
            if(p[i-1]%2==0)
            {
                p[n-h]=n-i+1;
                p[i]=n-i-1;
                h++;
            }
            else if(p[i-1]%2==1)
            {
                p[i]=i-1;
                p[n-h]=i+1;
                
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<p[i]<<' ';
}