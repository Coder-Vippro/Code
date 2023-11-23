#include <bits/stdc++.h> 
using namespace std; 
int a[100001];
int n,k;
int dem=0;
int maxx=-1e9+1;
int main()
{
    freopen("capso1.inp", "r", stdin);
    freopen("capso1.out", "w", stdout);
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]+a[i+1]==k)
        {
            dem++;
        }
        else
        {
            if(dem+1>maxx)
            {
                maxx=dem+1;
            }
            dem=0;
        }
    }
    cout<<maxx;
    return 0;
}