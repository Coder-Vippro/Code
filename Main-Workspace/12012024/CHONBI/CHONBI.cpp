#include <bits/stdc++.h>
using namespace std;
long long n,m;
pair <long long,long long> p[100001];
long long tong=0;
int main()
{
    freopen("CHONBI.inp","r",stdin);
    freopen("CHONBI.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>p[i].second>>p[i].first;
    }
    sort(p+1,p+m+1);
    for(long long i=m;i>=1;i--)
    {
        if(n-p[i].second>=0)
        {
            tong+=p[i].second*p[i].first;
            //cout<<tong<<' '<<p[i].second<<' '<<p[i].first<<'\n';
            n-=p[i].second;
        }
        else
        {
            tong+=n*p[i].first;
            //cout<<tong<<' '<<n<<' '<<p[i].first<<'\n';
            n-=n;
        }
        if(n==0)break;
    }
    cout<<tong;
}