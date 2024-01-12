#include <bits/stdc++.h>
using namespace std;
const int mn=1e3+7;
const long long oo=1e12+7;
int n,k,a[mn][mn]; long long res,tong; int main()
{
ios_base::sync_with_stdio(0); cin.tie(0);     cout.tie(0);
freopen("Bonus.inp","r",stdin);
freopen("Bonus.out","w",stdout);
cin>>n>>k;
    res=-oo;
    for(int i=1;i<=n;i++)
         for(int j=1;j<=n;j++)  cin>>a[i][j];
    for(int i=1;i<=n-k+1;i++)
        for(int j=1;j<=n-k+1;j++)
        {
            tong=0;
             for(int t1=i;t1<=i+k-1;t1++)
                 for(int t2=j;t2<=j+k-1;t2++)
                    tong+=a[t1][t2];
                    res=max(res,tong);
        }
    cout<<res;     return 0;
}
