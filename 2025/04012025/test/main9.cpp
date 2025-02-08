#include <bits/stdc++.h>
using namespace std;
map <int,int> mp;
int a[20000001];
int n,k;
int ans=1e9;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l=1;
    for(int i=1;i<=n;i++)
    {
        mp[a[i]]++;
        if(mp.size()==k)
        {
            while(l<=i && mp[a[l]]>1 && mp.size()==k)
            {
                mp[a[l]]--;
                l++;
            }
            ans=min(ans,i-l+1);
        }
        
    }
    if(ans!=1e9)
    cout<<ans;
    else cout<<0;
}