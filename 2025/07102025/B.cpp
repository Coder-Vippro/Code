#include <bits/stdc++.h>
using namespace std;
int t,l,m,n,r;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>l>>r;
        if(r>=m)
        {
            cout<<0<<' '<<m<<'\n';
        }
        else if(abs(l)>=m)
        {
            cout<<-m<<' '<<0<<'\n';
        }
        else
        {
            cout<<l<<' '<<m-abs(l)<<'\n';
        }
    }
}