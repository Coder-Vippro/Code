#include <bits/stdc++.h>
using namespace std;
bool kt(int x)
{
    int dem=0;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            dem+=i;
            if(x/i!=i)dem+=x/i;
        }
    }
    if(2*x<=dem)return true;
    return false;
}
int n;
int x;
vector <int> p;
int main()
{
    freopen("GHH.inp","r",stdin);
    freopen("GHH.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(kt(x)==true)
        p.push_back(x);
    }
    cout<<p.size()<<'\n';
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<'\n';
    }
}