#include <bits/stdc++.h> 
using namespace std; 
long long a,b;
bool kt(int n)
{
    int h=n;
    int tong=0;
    while(n>0)
    {
        tong=tong*10+n%10;
        n=n/10;
    }   
    if(__gcd(tong,h)==1)return true;
    return false;
}
int c,d;
int dem=0;
int main()
{
    freopen("SOTL.inp","r",stdin);
    freopen("SOTL.out","w",stdout);
    cin>>c>>d;
    for(int i=c;i<=d;i++)
    {
        if(kt(i)==true)
        dem++;
    }
    cout<<dem;
    
}