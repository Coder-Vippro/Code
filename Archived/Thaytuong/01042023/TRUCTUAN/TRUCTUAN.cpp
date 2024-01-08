#include <bits/stdc++.h> 
using namespace std; 
long long x,y,z;
unsigned long long kq=0;
unsigned long long C(long long k, long long n) 
{
   if(k==1)return n;
   if(k==2)return n*(n-1)/2;
   if(k==3)return n*(n-1)*(n-2)/6;
   if(k==4)return n*(n-1)*(n-2)*(n-3)/24;
   return 1;
}
int main()
{
    freopen("TRUCTUAN.inp","r",stdin);
    freopen("TRUCTUAN.out","w",stdout);
    cin>>x>>y>>z;
    kq=C(4,x+y+z)-(C(2,x)*C(1,y)*C(1,z)+C(1,x)*C(2,y)*C(1,z)+C(1,x)*C(1,y)*C(2,z));
    cout<<kq;
    return 0;
}