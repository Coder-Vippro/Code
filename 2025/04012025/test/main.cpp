#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[10001];
long long tmp;
unordered_map <long long,vector<pair<int,int>>> mp;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            tmp=k-(a[i]+a[j]);
            if(mp.find(tmp)!=mp.end())
            {
                for(auto pair:mp[tmp])
                {
                    int pi=pair.first;
                    int pj=pair.second;
                    if(pi!=i&&pi!=j&&pj!=i&&pj!=j)
                    {
                        cout<<i<<" "<<j<<" "<<pi<<" "<<pj;
                        return 0;
                    }
                }
                
            }
            mp[a[i]+a[j]].push_back({i,j});
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}