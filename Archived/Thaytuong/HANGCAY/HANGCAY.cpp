#include <bits/stdc++.h> 
using namespace std; 
int n,m;
int a[10001];
int duminn=1e9;
int vt;
int du;
int tong=0;
int j=1;
int maxx=-1e9;
int main()
{
    //freopen("HANGCAY.inp","r",stdin);
    //freopen("HANGCAY.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        maxx=max(a[i],maxx);
    }
    while(j<=maxx)
    {
        for(int i=1;i<=n;i++)
        {
            tong=tong+(a[i]-j);
        }
        if(tong-m<=duminn && tong-m>=0 && tong>=m)
        {
            duminn=tong-m;
            vt=j;
        }
        j++;
        tong=0;
    }
    cout<<duminn;
}