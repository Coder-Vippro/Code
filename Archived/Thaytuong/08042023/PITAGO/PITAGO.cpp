#include <bits/stdc++.h>
using namespace std;
int n;
int dem=0;
int main()
{
    freopen("PITAGO.inp","r",stdin);
    freopen("PITAGO.out","w",stdout);
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) 
        {
            long long k=(i*i+j*j);
            long long h=sqrt(k);
            if(h*h==k && h<=n)dem++;
        }
    }
    cout<<dem;
}
