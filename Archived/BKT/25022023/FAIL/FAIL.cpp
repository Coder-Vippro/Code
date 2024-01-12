#include <bits/stdc++.h> 
using namespace std; 
int a[1005],k,n;
int main()
{
    freopen("FAIL.INP","r",stdin);
    freopen("FAIL.OUT","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for (int i = n; i >= 1; i--)
    {
        if(a[i]<k)
        {
            cout<<a[i];
            return 0;
        }
    }
    cout<<-1;
}