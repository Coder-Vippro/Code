#include <bits/stdc++.h> 
using namespace std; 
int n;
pair <int,int> p[100001];
int maxx=1e9,minn=-1e9;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DT.inp","r",stdin);
    freopen("DT.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].first>>p[i].second;
        if(p[i].first<maxx)
        {
            maxx=p[i].first;
        }
        if(p[i].second>minn)
        {
            minn=p[i].second;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(p[i].first<=maxx && p[i].second>=minn)
        {
            cout<<p[i].first<<' '<<p[i].second;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}