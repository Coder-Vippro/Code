#include <bits/stdc++.h> 
using namespace std; 
long long n;
int dem=1;
int main()
{
    freopen("CSBB.inp","r",stdin);
    freopen("CSBB.out","w",stdout);
    cin>>n;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0)
        {
            dem++;
            if(i!=n/i)dem++;
        }
    }
    int kq=dem*2;
    if(n%2==0)kq--;
    cout<<kq;
}