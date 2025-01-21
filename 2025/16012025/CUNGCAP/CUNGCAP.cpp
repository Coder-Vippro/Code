#include <bits/stdc++.h>
using namespace std;
int n;
int p[1002];
void sangnt(int n)
{
    fill(p,p+n+1,1);
    p[0]=p[1]=0;
    for(int i=2;i<=n;i++)
    {
        if (p[i]==1)
        {
            for(int j=i*i;j<=n;j+=i) p[j]=0;
        }
    }
}
bool ans(int n)
{
    int tong=0;
    while (n>0)
    {
        int x=n%10;
        tong+=x*x;
        n/=10;
    }
    if (p[tong]==1) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CUNGCAP.INP","r",stdin);
    freopen("CUNGCAP.OUT","w",stdout);
    cin>>n;
    sangnt(1001);
    for(int i=n;i>=1;i--)
    {
        if(ans(i))
        {
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    return 0;
}