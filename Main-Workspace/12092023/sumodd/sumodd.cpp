#include <bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    freopen("sumodd.inp","r",stdin);
    freopen("sumodd.out","w",stdout);
    cin>>n;
    cout<<((n-1)/2+1)*(n+1)/2;
    return 0;
}