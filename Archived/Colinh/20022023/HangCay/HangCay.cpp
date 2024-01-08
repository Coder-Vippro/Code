#include <bits/stdc++.h> 
using namespace std; 
pair <int,int> p[100005]; 
int n,m,l;
int tree[100005]; 
int dem=0;
int main()
{
    freopen("HangCay.INP", "r", stdin);
    freopen("HangCay.OUT", "w", stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        tree[i]=1;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for(int i=1;i<=m;i++)
    {
        int vt=p[i].first;
        int vt2=p[i].first;
        int sl=p[i].second;
        for(int j=vt;j<=vt+sl;j++)
        {
            tree[j]=0;
        }
        for(int k=vt2;k>=vt-sl;k--)
        {
            tree[k]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(tree[i]==0)
        {dem++;}
    }
    cout<<dem;
    return 0;
}