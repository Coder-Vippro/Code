#include <bits/stdc++.h> 
using namespace std; 
long long n;
long long dem=0;
long long kq=1;
long long i=2;
int main()
{
    freopen("Demcap.inp","r",stdin);
    freopen("Demcap.out","w",stdout);
    cin>>n;
    while(n>=i)
    {
        while(n%i==0)
        {
            n=n/i;
            dem++;
        }
        kq=kq*(dem+1);
        dem=0;
        i++;
    }
    cout<<(kq-1)/2;
}
//1 2 4 8 16

