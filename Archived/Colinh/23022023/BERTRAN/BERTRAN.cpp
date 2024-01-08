#include <bits/stdc++.h> 
#define N int (1e7)
using namespace std; 
int n;
int p[N+2];
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
    freopen("BERTRAN.INP","r",stdin);
    freopen("BERTRAN.OUT","w",stdout); 
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    int dem=0;
    sangngto(n*2);
    for(int i=n;i<=2*n;i++)
    {
        if(p[i]==1)dem++;
    }
    cout<<dem;
}