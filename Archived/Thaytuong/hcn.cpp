#include <bits/stdc++.h>

using namespace std;
long long n,x,y,r,ix=1e9,iy=1e9,ax=0,ay=0;
int main()
{
   freopen("hcn.inp","r",stdin);
   freopen("hcn.out","w",stdout);
   cin>>n;for(int i=1;i<=n;i++){
   cin>>x>>y>>r;ix=min(ix,x-r);iy=min(iy,y-r);ax=max(ax,x+r);ay=max(ay,y+r);
   }
   cout<<(ax-ix)*(ay-iy);
    return 0;
}
