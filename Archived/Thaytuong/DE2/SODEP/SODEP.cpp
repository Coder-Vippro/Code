#include <bits/stdc++.h>

using namespace std;
long long d,n,kq=1;
int main()
{
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    cin>>d>>n;
    if(n==100)n++;
    if(d==0){cout<<n;return 0;}
    if(d==1){cout<<n*100;return 0;}
    else cout<<n*10000;
    return 0;
}
