#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);
    cin>>n;
    if(n%2==0)cout<<n/2;
    else cout<<(n-1)/2-n;
}
