#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
int main()
{
    cin>>n;
    if(n==1)
    {
        //n==1 => "No"
        cout<<"No";
        return 0;
    }
    if(n==0)
    {
        //n==0 => x=y (gia tri bat ky)
        cout<<"Yes"<<'\n';
        cout<<2<<' '<<2;
        return 0;
    }
    if(n%4==0 && n!=4)
    {
        //n==4 thi cout ra "No"
        //voi n%4==0 xet x-y=2 && x+y=n/2
        unsigned long long x=(n/2+2)/2;
        unsigned long long y=x-2;
        cout<<"Yes"<<"\n";
        cout<<x<<' '<<y;
    }
    else if(n%2==1)
    {
        //n la so le => x-y=1 && x+y=n
        unsigned long long x=(n+1)/2;
        unsigned long long y=x-1;
        cout<<"Yes"<<'\n';
        cout<<x<<' '<<y;
    }
    else cout<<"No";
}