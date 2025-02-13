#include <bits/stdc++.h>
using namespace std;
int n;
int tonguoc(int n)
{
    int tong=0;
    for(int  i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            tong+=i;
            if(i!=n/i)tong+=n/i;
        }
    }
    //tong+=n;
    return tong;
}
vector <int> ans;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("GHH.inp", "r", stdin);
    freopen("GHH.out", "w", stdout);
    cin>>n;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(2*x<=tonguoc(x))ans.push_back(x);
    }
    cout<<ans.size()<<'\n';
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<'\n';
}