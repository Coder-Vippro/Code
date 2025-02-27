#include <bits/stdc++.h>
using namespace std;
int n, m;
vector <vector <int>> a;
int main()
{
    cin>>n>>m;
    a.resize(n+1,vector<int>(m+1,1));
    //priority_queue <pair<int,pair<int,int>>> q;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}