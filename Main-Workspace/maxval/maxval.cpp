#include <bits/stdc++.h> 
using namespace std; 
int a[1000001];
int n;
int k;
int minn=-1e9-1;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("dolechnn.inp","r",stdin);
    //freopen("dolechnn.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int i=1,j=1;
    while(i<=n && j<=n)
    {
        if(a[j]!=0 && a[i]>=a[j])
        minn=max(minn,a[i]%a[j]);
        if(a[i]<a[j])
        {
            i++;
        }
        else j++;
    }
    cout<<minn;
}

