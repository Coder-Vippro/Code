#include <bits/stdc++.h>
using namespace std;
int n;
unordered_map<int,int> mp;
int l,r;
int maxx=0;
int ans;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            mp[i]++;
            if(mp[i]>maxx)
            {
                maxx=mp[i];
                ans=i;
            }
        }
    }
    cout<<ans;
    return 0;
}