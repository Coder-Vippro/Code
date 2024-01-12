#include <bits/stdc++.h> 
using namespace std; 
int n;
int a[100001];
vector <int> kq;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DINHDAY.inp","r",stdin);
    freopen("DINHDAY.out","w",stdout);
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    for (int i = 2; i < n; i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            kq.push_back(a[i]);
        }
    }
    if(kq.size()>0)
    {
        cout<<kq.size()<<'\n';
        for (int i = 0; i < kq.size(); i++)
        {
            cout<<kq[i]<<' ';
        }
    }
    else cout<<kq.size();
    
}