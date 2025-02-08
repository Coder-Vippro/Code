#include <bits/stdc++.h>
using namespace std;
int n;
int a[300005];  
map <int,int> mp;
int ans=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l=1,r=1;
    while(l<=r && r<=n+1)
    {
        if(mp[a[r]]==0)
        {
            ans++;
            mp[a[r]]++;
            r++;
        }
        else
        {
            mp[a[l]]--;
            l++;
        }
    }
    cout<<ans;
}
