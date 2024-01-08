#include <bits/stdc++.h> 
using namespace std; 
int n,i=1;
int main()
{
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    cin>>n;
    int dem=0;
    int kq=1;
    int h=n;
    while(i<=n)
    {
        while(n%i==0)
        {
            dem++;
            n=n/i;
        }
        kq=kq*(dem+1);
        dem=0;
        i++;
    }
    if(h%n==0)cout<<"YES";
    else cout<<"NO";
}