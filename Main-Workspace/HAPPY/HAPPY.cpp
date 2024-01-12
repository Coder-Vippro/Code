#include <bits/stdc++.h> 
#define N int (1e7)
using namespace std;
int kq=0;
int n,m;
int k[N+5];
void sangnt(int n)
{
    fill(k,k+n+1,1);
    k[0]=k[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(k[i]==1)
        for(int j=i*i;j<=n;j+=i) k[j]=0;
    }
}
int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("HAPPY.inp","r",stdin);
    //freopen("HAPPY.out","w",stdout);
    cin>>n>>m;
    sangnt(1001);
    vector<vector<int>> p(n + 1);
    for (int i = 0; i < m; i++) 
    {
        int x, y;
        cin >> x >> y;
        p[x].push_back(y);
        p[y].push_back(x);
    }
    for (int i=0;i<p.size();i++) 
    {
        if (p[i].size() >=1 && k[p[i].size()]==0) 
        {
            kq++;
        }
    }
    cout<<kq;
    return 0;
}
