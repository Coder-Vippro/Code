#include <bits/stdc++.h>
using namespace std;
int n;
int x;
unordered_map <int,int> a;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DAYDEP.INP","r",stdin);
    freopen("DAYDEP.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
    }
    int ans=0;
    for(auto pair:a)
    {
        if(pair.second!=pair.first)
        {
            if(pair.second>pair.first)
            {
                ans+=pair.second-pair.first;
            }
            else
            {
                ans+=pair.second;
            }
        }
    }
    cout<<ans;
}