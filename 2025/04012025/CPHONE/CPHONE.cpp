#include <bits/stdc++.h>
using namespace std;
map <int,int>a;
int n;
int x;
int maxx=-1e9;
int main()
{
    freopen("CPHONE.INP","r",stdin);
    freopen("CPHONE.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
        if(a[x]>maxx)maxx=a[x];
    }
    for(auto pair:a)
    {
        if(pair.second==maxx)
        {
            cout<<pair.first<<'\n';
        }
    }
}