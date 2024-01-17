#include <bits/stdc++.h>
using namespace std;
int m,n,k;
int maxx1=1e9+1,maxx2=1e9+1,maxx3=1e9+1;
int h=3;
int main()
{
    freopen("PHANCONG.inp","r",stdin);
    freopen("PHANCONG.out","w",stdout);
    while(h--)
    {
        cin>>m>>n>>k;
        if(m<maxx1)maxx1=m;
        if(n<maxx2)maxx2=n;
        if(k<maxx3)maxx3=k;
    }
    cout<<max(max(maxx1,maxx2),maxx3);
}