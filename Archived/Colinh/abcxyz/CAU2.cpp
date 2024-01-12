#include <bits/stdc++.h>
using namespace std;
string x,y;
vector <int> f;
int main()
{
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
    cin>>x>>y;
    f.push_back(0);
    if(x[0]==y[0])
    {
        f[0]=1;
    }
    for(int i=1;i<x.size();i++)
    {
        if(x[i]==y[i])
        {
            f.push_back(f[i-1]+1);
        }
        else f.push_back(f[i-1]);
    }
    sort(f.begin(),f.end());
    cout<<f[f.size()-1];
}