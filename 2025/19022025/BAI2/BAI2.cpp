#include <bits/stdc++.h>
#define ll long long
#define N int(1e7)
using namespace std;
int n,p[N],q,k;
void sangnt(int n)
{
    fill(p+1,p+n+1,1);
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                p[j]=0;
            }
        }
    }
}
bool check (int n)
{
    if(p[n])
    {
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        if(sum%k==0) return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    cin>>n>>q>>k;
    sangnt(q);
    int dem=0;
    for(int i=n+1;i<=q-1;i++)
    {
        if(check(i)) dem++;
    }
    cout<<dem;
    return 0;

}