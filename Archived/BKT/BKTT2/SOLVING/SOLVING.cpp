#include <bits/stdc++.h> 
using namespace std; 
pair<int,int> p[100006];
long long n,c;
int dem=0;
int main()
{
    freopen("SOLVING.INP","r",stdin);
    freopen("SOLVING.OUT","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>c;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p+1,p+n+1);
    for(int i=1;i<=n;i++)
    {
        if(c>=p[i].first)
        {
            dem++;
            c+=p[i].second;
        }
    }
    cout<<dem;
    return 0;
}