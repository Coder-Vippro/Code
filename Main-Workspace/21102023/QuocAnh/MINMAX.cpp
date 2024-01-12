#include <bits/stdc++.h> 
using namespace std; 
int n;
double a[101];
int main()
{
    freopen("MINMAX.inp","r",stdin);
    freopen("MINMAX.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cout<<fixed<<setprecision(2)<<a[n]<<' '<<a[1];
}