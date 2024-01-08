#include <bits/stdc++.h> 
using namespace std; 
int n;
double a[1001];

int main()
{
    freopen("ARRSORT.inp","r",stdin);
    freopen("ARRSORT.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        
    }
    sort(a,a+n+1);
    for(int i=1;i<=n;i++)
    {
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
    cout<<'\n';
    reverse(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
}