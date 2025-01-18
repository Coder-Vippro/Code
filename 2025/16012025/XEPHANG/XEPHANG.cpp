#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e7 + 5;
const ll mod = 1e9 + 7;
const ll base = 257;
string s;
ll hash_val[N],power[N];
int n;
ll quickpow(ll a,ll n)
{
    ll result=1;
    while (n>0)
    {
        if(n%2==1)result=(result*a)%mod;
        a=(a*a)%mod;
        n/=2;
    }
    return result%mod;
}
bool ans(int len)
{
    set<ll>hashes;
    for(int i=1;i+len-1<=n;i++)
    {
        int l=i,r=i+len-1;
        ll curr_hash=(hash_val[r]-(hash_val[l-1]*power[len])%mod+mod)%mod;
        if(hashes.count(curr_hash))return false;
        hashes.insert(curr_hash);
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("XEPHANG.INP","r",stdin);
    freopen("XEPHANG.OUT","w",stdout);
    cin >> n >> s;
    s = " " + s;
    power[0] = 1;
    for(int i=1;i<=n;i++)
    {
        power[i]=quickpow(base,i);
    }
    for(int i=1;i<=n;i++)
    {
        hash_val[i]=(hash_val[i-1]*base+s[i])%mod;
    }
    int l=1,r=n,kq=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ans(mid))
        {
            kq=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<kq;
    return 0;
}
