#include <bits/stdc++.h>
using namespace std;
unsigned long quickpow(int a,int n)
{
    unsigned long long result=1;
    while (n>0)
    {
        if(n%2==1)result*=a;
        a*=a;
        n/=2;
    }
    return result;
}
int a,b;
int main()
{
    cin>>a>>b;
    cout<<quickpow(a,b);
}