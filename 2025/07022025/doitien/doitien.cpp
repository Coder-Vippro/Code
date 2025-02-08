#include <bits/stdc++.h>
using namespace std;
unsigned long long n,h,k,p,dem1=0,dem2=0,dem3=0;
int main()
{
    cin>>n;
    while(n>0)
    {
        h=n/500000;
        dem1+=h;
        n-=h*500000;
        k=n/200000;
        dem2+=k;
        n-=k*200000;
        p=n/100000;
        dem3+=p;
        n-=p*100000;
        if(n<100000 && n!=0) break;
    }
    if(n!=0)
    {
        cout<<0<<' '<<500<<'\n'<<0<<' '<<200<<'\n'<<0<<' '<<100;
    }
    else cout<<dem1<<' '<<500<<'\n'<<dem2<<' '<<200<<'\n'<<dem3<<' '<<100;
}