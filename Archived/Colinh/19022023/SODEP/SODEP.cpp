#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
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
    if(n%2==0)return false;
    else
    {
        if(p[n]==1 && p[(n+1)/2]==1)
        return true;
    }
    return false;
}
int x,y,dem=0;
int main()
{
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    cin>>n;
    sangngto(100001);
    while(n--)
    {
        cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            if(kt(i)==true)
            dem++;
        }
        cout<<dem<<'\n';
        dem=0;
    }
    return 0;
}
