#include <bits/stdc++.h>

using namespace std;
long long n;
int main()
{
    freopen("terms.inp","r",stdin);
    freopen("terms.out","w",stdout);
    cin>>n;
    long long t=n*n;
    cout<<n-(n-1)/2+1<<'\n';
    cout<<n*n-(n+1)+1;
}
