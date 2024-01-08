#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
bool ktnt(long long n)
{
    int dem=1;
    if(n<2)return false;
    if(n%2==0 && n!=2)return false;
    if(n%3==0 && n!=3)return false;
    if(n%5==0 && n!=5)return false;
    if(n%7==0 && n!=7)return false;
    if(n==2 || n==3 || n==5 || n==7)
    {
        return true;
    }
    for(int i=1;i*i<=n;i++)
    {
        dem++;
        if(n>2)return false;
    }
    if(dem>2)return false;
    if(dem==2)return true;
    return false;
}
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
long long tong=0;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("PRIME.INP","r",stdin);
    freopen("PRIME.OUT","w",stdout);
    cin>>n;
    sangngto(n);
    for(int i=1;i<=n;i++)
    if(p[i]==1)tong=tong+i;
    cout<<tong<<'\n';
    if(ktnt(tong)==true)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}