#include <bits/stdc++.h> 
#define N int (1e7)
using namespace std; 
int n;
int f[100001];
int p[N+1];
void sangngto (int n) //sang nguyen to
{
    fill(p,p+n+1,1); //phu toan bo mang p voi gia tri 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
int kt(int n)
{
    long long tong=0;
    while(n>0)
    {
        int h=n%10;
        tong=tong+(h*h);
        n=n/10;
    }
    return tong;
}
int i=1;
int k=1;
int h;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BEAUTY2.inp","r",stdin);
    freopen("BEAUTY2.out","w",stdout);
    sangngto(10001);
    while(i<=10000)
    {
        if(p[kt(k)]==1)
        {
            f[i]=k;
            i++;
            k++;
        }
        else k++;
    }
    while(cin>>h)
    {
        cout<<f[h]<<'\n';
    }
}