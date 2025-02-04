#include <bits/stdc++.h>
using namespace std;
int n,k;
string s;
int main()
{
    freopen("PASSWORD.INP","r",stdin);
    freopen("PASSWORD.OUT","w",stdout);
    cin>>n>>k;
    while(n--)
    {
        if(k>=9)
        {
            //cout<<9;
            s+='9';
            k-=9;
        }
        else 
        {
            //cout<<k;
            s+=char(k+'0');
            k=0;
        }
    }
    if(k>0)cout<<-1;
    else cout<<s;
    return 0;
}