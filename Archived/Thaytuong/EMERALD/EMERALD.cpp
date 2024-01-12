#include <bits/stdc++.h>

using namespace std;
pair <int,int> a[10001];
bool f[501][500001];
vector <int> t;
int main()
{
    freopen("EMERALD.inp","r",stdin);
    freopen("EMERALD.out","w",stdout);
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first;
        s+=a[i].first;
        a[i].second=i;
    }
    if(s%3!=0)
    {
        cout<<0;
        return 0;
    }
    s=s/3;
    for(int i=0;i<=n;i++)f[i][0]=1;
    for(int i=1;i<=s;i++)f[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            f[i][j]=f[i-1][j];
            if(j>=a[i].first&& f[i][j]==0 && f[i-1][j-a[i].first]==1)f[i][j]=1;
        }
    }
    if(f[n][s]==0){cout<<"0";return 0;}
    while(s>0)
    {
        for(int i=n;i>=1;i--)
        {
                if(a[i].first>0 && s>=a[i].first&& f[n-1][s-a[i].first]==1)
                {
                    t.push_back(a[i].second);
                    s-=a[i].first;
                    //a[i].first-=a[i].first;
                    break;
                }
        }
    }
}