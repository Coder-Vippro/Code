#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
pair <int,int> b[100005];
int a[100005];
int n,k;
int tong=0;
int minn=1e9;
int it;
int lowest_price(int i,int j)
{
    int res=1e9;
    for(int k=i;k<=j;k++)
    {
        res=min(res,b[k].second);
    }
    return res;
}
int tknplonhonbang(int k,int h)
{
    int mid;
    int result=-1e9;
    int l=1;
    int r=h;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(b[mid].first>=k)
        {
            result=mid;
            r=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    return result;
}
/*int cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}*/
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CHAMCAY.INP","r",stdin);
    freopen("CHAMCAY.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>b[i].first>>b[i].second;
    }
    sort(b+1,b+k+1);
    /*for(int i=1;i<=k;i++)
    {
        cout<<b[i].first<<' '<<b[i].second<<endl;
    }*/
    for(int i=1;i<=n;i++)
    {
        it=tknplonhonbang(a[i],k);
        tong+=lowest_price(it,k);
        //cout<<it<<' ';
        //cout<<a[i]<<' '<<it<<' '<<h<<endl;
    }
    cout<<tong;
    return 0;
}