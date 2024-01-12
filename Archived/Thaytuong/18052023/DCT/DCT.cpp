#include <bits/stdc++.h> 
using namespace std; 
unsigned long long C(long long n, long long k) 
{
    if(k>n)return 0;
   if(k==1)return n;
   if(k==2)return n*(n-1)/2;
   if(k==3)return n*(n-1)*(n-2)/6;
   if(k==4)return n*(n-1)*(n-2)*(n-3)/24;
   return 1;
}
long long a,b,c,n;
unsigned long long kq=0;
int main()
{
    freopen("DCT.inp","r",stdin);
    freopen("DCT.out","w",stdout);
    cin>>a>>b>>c>>n;
    //if(n==3)
    //kq=kq+C(b,1)*C(c,1)*C(a,1)+C(b,1)*C(c,2)+C(b,2)*C(c,1);
    //if(n==4)kq=kq+C(b,1)*C(a,1)*C(b,2)+C(b,1)*C(a,2)*C(c,1)+C(b,2)*C(a,1)*C(c,1)+C(b,3)*C(c,1)+C(b,2)*C(c,2)+C(b,1)*C(c,3);
    for(int i=0;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(n-i-j>=1 && n-i-j<=c)
            {
                kq=kq+C(a,i)*C(b,j)*C(c,n-i-j);
            }
        }
    }
    cout<<kq;
}