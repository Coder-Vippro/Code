#include <bits/stdc++.h>
using namespace std;
int n,x;
map <int,int> a;
int maxx=-1e9;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("CAU2.INP","r",stdin);
    //freopen("CAU2.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(auto pair:a)
    {
        cout<<pair.first<<' '<<pair.second<<'\n';
        if(pair.second>maxx)
        {
            maxx=pair.second;
        }
    }
    cout<<maxx;
}