#include <bits/stdc++.h>
//#pragma GCC optimize("O3")
using namespace std;
unordered_map <int,int> mp;
int n,x;
vector <int> a;
int b[1000005];
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("SDB.INP","r",stdin);
    freopen("SDB.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>b[i];
        mp[b[i]]++;
    }
    for(int i=1;i<=n;++i)
    {
        if(mp[b[i]]==1)
        {
            a.push_back(b[i]);
            dem++;
        }
        //if(dem==k) break;
    }
    cout<<dem<<"\n";
    for(int i=0;i<dem;++i)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}