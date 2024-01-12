#include <bits/stdc++.h>
using namespace std;
vector <int> p;
int n,m,x,dem=0;
int main()
{
    freopen("ChonBong.INP", "r", stdin);
    freopen("ChonBong.OUT", "w", stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        p.push_back(x);
    }
    sort(p.begin(),p.end());
    for(int i=0;i<p.size();i++)
    {
        int j=i;
        while(j<p.size())
        {
            j++;
            if(p[i]!=p[j] && p[i]!=-1 && p[j]!=-1 && i<j && j<p.size())
            {
                dem+=2;
                p[i]=-1;
                p[j]=-1;
                break;
            }
            /*for(int k=0;k<p.size();k++)
            {
                cout<<p[k]<<' ';
            }
            cout<<'\n';*/
        }
        
    }
    cout<<dem;
}
