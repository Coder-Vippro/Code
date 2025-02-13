#include <bits/stdc++.h>
using namespace std;
int n,m;
pair<int,int> a[100005];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("chonbi.inp","r",stdin);
    freopen("chonbi.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].second>>a[i].first;
    }
    sort(a+1,a+m+1);
    int tong=0;
    for(int i=m;i>=1;i--)
    {
        //cout<<a[i].first<<' '<<a[i].second<<'\n';
        if(n>=a[i].second)
        {
            n-=a[i].second;
            tong+=a[i].second*a[i].first;
            //cout<<n<<'\n';
        }
        else
        {
            a[i].second-=n;
            tong+=n*a[i].first;
            n=0;
        }
    }
    cout<<tong;
}