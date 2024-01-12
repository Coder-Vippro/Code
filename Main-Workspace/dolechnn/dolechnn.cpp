#include <bits/stdc++.h> 
using namespace std; 
int a[1000001],b[1000001];
int n,m;
int k;
int minn=1e9+1;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("dolechnn.inp","r",stdin);
    freopen("dolechnn.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int i=1,j=1;
    while(i<=n && j<=m)
    {
        minn=min(minn,abs(a[i]-b[i]));
        if(a[i]<b[j])
        {
            i++;
        }
        else j++;
    }
    cout<<minn;
}

