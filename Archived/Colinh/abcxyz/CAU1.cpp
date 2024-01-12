#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
void sangngto (int n) //sang nguyen to
{
    fill(p,p+n+1,1);  
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
int n;
int i=2;
int tong=0;
int main()
{
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);
    cin>>n;
    sangngto(n);
    while(i<=n)
    {
        if(n%i==0 && p[i]==1)
        {
            tong=tong+i;
        }
        i++;
    }
    cout<<tong;
}