#include <bits/stdc++.h>
using namespace std;
int n,k;
map <int,int> a;
pair <int,int> b[1000001];
bool check=false;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("BAI3.INP","r",stdin);
    //freopen("BAI3.OUT","w",stdout);
    cin>>n>>k;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
    }
    int maxx=-1e9;
    int nums;
    int ans=0;
    int h=1;
    for(auto pair:a)
    {
        b[h].first=pair.first;
        b[h].second=pair.second;
        h++;
    }
    maxx=b[h].first;
    nums=b[h].second;
    for(int i=h-1;i>=1;i--)
    {
        if(b[i+1].first-b[i].first>=k)
        {
            if(b[i+1].first>maxx)
            {
                maxx=b[i+1].first;
                nums=b[i+1].second;
            }
            check=false;
        }
        else
        {
            ans+=maxx*nums;
            check=true;
        }
    }
    if(check==false)
    {
        ans+=maxx*nums;
    }
    cout<<ans;
    return 0;
}