#include <bits/stdc++.h>
#define ll long long
#define N int (1e7)
using namespace std;
int p[N+1];
int n;
void sangnt(int n)
{
    fill(p+1,p+n+1,1);
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i])
        for(int j=i*i;j<=n;j+=i)
        {
            p[j]=0;
        }
    }
}
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    cin>>n;
    sangnt(n);
    for(int i=n-1;i>=n/2;i--)
    {
        //cout<<i<<" "<<n-i<<endl;
        if(p[i]&&p[n-i])
        {
            dem++;
            //return 0;
        }
    }
    cout<<dem;
    //cout<<p[2]<<' '<<p[7];
    return 0;
}