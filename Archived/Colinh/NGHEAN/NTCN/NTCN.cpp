#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int dem=0;
int a;
int main()
{
    //freopen("NTCN.INP","r",stdin);
    //freopen("NTCN.OUT","w",stdout);
    cin>>a;
    for(int i=1;i<a;i++)
    {
        int g = gcd(a, i);
        if(g==1)
        dem++;
    } 
    cout<<dem;
    return 0;
}