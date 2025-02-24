#include <bits/stdc++.h>
using namespace std;
int n;
map<long long,int>mp;
vector <long long> ans;
void sinh(int n)
{
    long long k=1;
    priority_queue <long long, vector<long long>, greater<long long>> pq;
    pq.push(1);
    while(!pq.empty() && ans.size()<n)
    {
        long long x=pq.top();
        pq.pop();
        if(mp.count(x))continue;
        mp[x]=1;
        //if(x>1e6+1)break;
        ans.push_back(x);
        pq.push(2*x+1);
        pq.push(3*x+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI4.INP","r",stdin);
    freopen("BAI4.OUT","w",stdout);
    cin>>n;
    sinh(n);
    cout<<ans[n-1];
    //for(int i:ans)
    ///cout<<i<<" ";
   // cout<<'\n'<<ans[n-1];
}