#include <bits/stdc++.h> 
using namespace std; 
long long k,m,n,q;
long long h,tong1=0,tong2=0;
long long tmp;
int main()
{
    freopen("TROMVANG.inp","r",stdin);
    freopen("TROMVANG.out","w",stdout);
    cin>>k>>m>>n>>q;
    h=k;
    tmp=k;
    if(h-m>=0){h-=m;tong1+=m;}
    if(h-n>=0){h-=n;tong1+=n;}
    if(h-q>=0){h-=q;tong1+=q;}
    if(k-q>=0){k-=q;tong2+=q;}
    if(k-n>=0){k-=n;tong2+=n;}
    if(k-m>=0){k-=m;tong2+=m;}
    if(m+q<=k)
    {
        cout<<max(m+q,max(tong1,tong2));
    }
    else cout<<max(tong1,tong2);
    return 0;
}