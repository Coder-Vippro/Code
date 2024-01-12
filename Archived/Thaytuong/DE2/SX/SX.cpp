#include <bits/stdc++.h>
using namespace std;
pair <string,int> p[100001];
int n;
int main()
{
    freopen("SX.INP","r",stdin);
    freopen("SX.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].first;
        p[i].second=i;
    }
    sort(p+1,p+n+1);
    for(int i=1;i<=n;i++)
    {
        cout<<p[i].second<<' ';
    }

}