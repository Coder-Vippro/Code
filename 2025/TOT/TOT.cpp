#include <bits/stdc++.h>
using namespace std;
int n;
int a[10001];
//int b[10001];
map <int,int> b;
map <tuple<int,int,int>,int> c;
/*bool tknp(int k)
{
    int l=1;
    int r=n;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(b[mid]==k)return true;
        else if(b[mid]>k)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return false;
}
*/
int ans=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("TOT.INP","r",stdin);
    freopen("TOT.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[-a[i]]++;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            int m=0-(a[i]+a[j]);
            if(b.count(m)>0)
            {
                tuple<int,int,int> t=make_tuple(a[i],a[j],b[m]);
                c[t]++;
            }
        }
    }
    for(auto i:c)
    {
        ans+=get<2>(i.first);
    }
    cout<<ans;
    return 0;


}
