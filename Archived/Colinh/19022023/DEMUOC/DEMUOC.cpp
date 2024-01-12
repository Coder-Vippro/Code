#include <bits/stdc++.h> 
using namespace std; 
int demuoc(long long n)
{
    long long k=sqrt(n);
    if(k*k==n)return 1;
    else return 2;
}
long long x,n;
long long chan=0,le=0;
int main()
{
    freopen("DEMUOC.INP","r",stdin);
    freopen("DEMUOC.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(demuoc(x)==2)chan++;
        else le++;
    }
    cout<<chan<<"\n";
    cout<<le;
    return 0;
}