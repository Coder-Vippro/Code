#include <bits/stdc++.h>
#include <chrono>
using namespace std;
int a[100001]; 
int ts[10000001];
vector <int> p;
int n;
int main()
{
    freopen("DAYDEP.inp","r",stdin);
    freopen("DAYDEP.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(ts[a[i]]==0)p.push_back(a[i]);
        ts[a[i]]++;
    }
    int dem=0;
    for(int i=0;i<p.size();i++)
    {
        if(p[i]!=ts[p[i]])
        {
            if(p[i]>ts[p[i]])
            {
                dem+=ts[p[i]];
            }
            else if(p[i]<ts[p[i]])
            {
                dem+=ts[p[i]]-p[i];
            }
        }
    }
    cout<<dem;
    return 0;
}