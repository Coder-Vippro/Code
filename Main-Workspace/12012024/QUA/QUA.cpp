#include <bits/stdc++.h>
using namespace std;
int tonguoc(int n)
{
    int tong=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            tong+=i;
            if(n/i!=i)
            {
                tong+=n/i;
            }
        }

    }
    return tong-n;
}
int n;
vector <int> p;
int x;
int dem=0;
int main()
{
    freopen("QUA.inp","r",stdin);
    freopen("QUA.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        if(tonguoc(x)==x)
        {
            p.push_back(x);
            dem++;
        }
        
    }
    cout<<dem<<'\n';
    for (int i = 0; i < p.size(); i++)
    {
        cout<<p[i]<<' ';
    }
    
}