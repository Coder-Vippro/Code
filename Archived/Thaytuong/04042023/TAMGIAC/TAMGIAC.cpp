#include <bits/stdc++.h>
using namespace std;
unsigned long long C(long long k, long long n) 
{
   if(k==1)return n;
   if(k==2)return n*(n-1)/2;
   if(k==3)return n*(n-1)*(n-2)/6;
   if(k==4)return n*(n-1)*(n-2)*(n-3)/24;
   return 1;
}
int n,k;
int main()
{
    freopen("TAMGIAC.inp","r",stdin);
    freopen("TAMGIAC.out","w",stdout);
    cin>>n>>k;
    unsigned long long kq=0;
    kq=kq+C(1,n)*C(2,k)+C(2,n)*C(1,k);
    cout<<kq;
}