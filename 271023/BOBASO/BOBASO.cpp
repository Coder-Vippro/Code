#include <bits/stdc++.h> 
using namespace std; 
int n;
int a[101];
int maxx=-1e9+1;
int dem=0;
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("BOBASO.inp", "r", stdin);
    freopen("BOBASO.out", "w", stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j && j!=k && i!=k && i<j && j<k)
                {
                    if(a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i])
                    {
                        dem++;
                        if(a[i]+a[j]+a[k]>maxx)
                        {
                            maxx=a[i]+a[j]+a[k];
                        }
                    }
                }
            }
        }
    }
    cout<<dem<<' '<<maxx;
    return 0;
}