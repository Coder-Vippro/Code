#include <bits/stdc++.h>
using namespace std;
int a[100001];
int f[100001];
int maxx=0;
int vt;
int main()
{
    freopen("LIS.INP","r",stdin);
    freopen("LIQ.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        maxx=0;
        for(int j=1;j<=i;j++)
        {
            if(a[i]>=a[j])
            {
                if(maxx<f[j])
                    maxx=f[j];
            }
        }
        f[i]=maxx+1;
    }
    sort(f+1,f+n+1);
    cout<<f[n];
    return 0;
}
