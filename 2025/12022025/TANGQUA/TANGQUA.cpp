#include <bits/stdc++.h>
using namespace std;
int n;
bool ans(int n)
{
    int tong=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            tong+=i;
            if(i!=n/i)
            {
                tong+=n/i;
            }
        }
    }
    if(tong-n==n)
    {
        return true;
    }
    return false;
}
vector<int> b;
int a[4000005];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("QUA.INP","r",stdin);
    freopen("QUA.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(ans(a[i])==true)
        {
            b.push_back(a[i]);
        }
    }
    cout<<b.size()<<'\n';
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<' ';
    }
}