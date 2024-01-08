#include <bits/stdc++.h>
using namespace std;
int n,x,d=0;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TIMX.inp","r",stdin);
    freopen("TIMX.out","w",stdout);
    cin>>n>>x;
    for(int i=1;i<=sqrt(x);i++) 
    {
        if(x%i==0) 
        {
            int a=i,b=x/i;
            if(a<=n && b<=n) 
            {
                d++;
                if(a!=b) d++;
            }
        }
    }
    cout<<d;
    return 0;
}