#include <bits/stdc++.h>
using namespace std;
int n,q,k;
int a[100005];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("EQLARRAY.INP","r",stdin);
    freopen("EQLARRAY.OUT","w",stdout);
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        int sum=0;
        int maxx=-1e9;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            sum+=a[i];
            maxx=max(maxx,a[i]);
        }
        if(sum%k==0 && maxx<=sum/k) cout<<"YES\n";
        else cout<<"NO\n";
    }
}