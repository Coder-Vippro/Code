#include <bits/stdc++.h> 
using namespace std; 
int a[1001];
int n;
int main()
{
    freopen("CL.INP","r",stdin);
    freopen("CL.OUT","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cout<<a[n]-a[1];
    return 0;
}