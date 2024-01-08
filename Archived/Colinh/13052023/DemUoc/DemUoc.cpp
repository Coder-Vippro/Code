#include <bits/stdc++.h> 
using namespace std; 
long long n;
long long i=2;
long long dem=0;
long long dem1=1;
int main()
{
    freopen("DemUoc.inp","r",stdin);
    freopen("DemUoc.out","w",stdout); 
    cin>>n;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i) dem++;
            else dem += 2;
        }
    }
    cout<<dem;
}