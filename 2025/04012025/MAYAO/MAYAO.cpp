#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
ll n,k;
pair <ll,ll> a[1001];
bool check(ll day)
{
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        ll chuky=a[i].second+1;
        ll fullchuky=day/chuky;
        ll thua=day%chuky;
        ll sp=fullchuky*(a[i].first*a[i].second)+min(thua,a[i].second)*a[i].first;
        sum+=sp;
        if(sum>=k)return true;
    }
    return sum>=k;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("MAYAO.INP","r",stdin);
    freopen("MAYAO.OUT","w",stdout);
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    ll left=0;
    ll right=1e15;
    ll ans;
    while(left<=right)
    {
        ll mid=(left+right)/2;
        if(check(mid))
        {
            ans=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    cout<<ans;
}