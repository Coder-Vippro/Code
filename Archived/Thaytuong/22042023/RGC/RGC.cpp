#include <bits/stdc++.h>
using namespace std;
long long num;
long long kq=1;
int main() 
{
    freopen("RGC.inp","r",stdin);
    freopen("RGC.out","w",stdout);
    cin>>num;
    for (long long i = 2; i <= sqrt(num); i++) 
    {
        while (num % (i*i) == 0) 
        {
            kq=kq*i;
            num /= i*i;
        }
    }
    cout<<kq;
    if(num==1)cout<<' '<<1;
    else cout<<' '<<num;
    return 0;
}
/*
Cach 2: phan tich thanh tich cac thua so nguyen to
int x=1,y=1;
while(i*i<=a)
{
    d=0;
    while(a%i==0)
    {
        d++;
        a/=i;
    }
    if(d%2==1)y=y*a;
}
if(a>1)y=y*a;
cout<<sqrt(n/y)<<' '<<y;
*/