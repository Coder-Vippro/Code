#include <bits/stdc++.h> 
using namespace std;
int a,b;
int ULLN(int n)
{
    if(n%2==1)return n;
    int k=2;
    while(n%k==0 && (n/k)%2==0 && n>=k)
    {
        k*=2;
    }
    return n/k;
}
int main()
{
    freopen("ULLN.inp","r",stdin);
    freopen("ULLN.out","w",stdout);
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        cout<<ULLN(i)<<'\n';
    }
    return 0;
}