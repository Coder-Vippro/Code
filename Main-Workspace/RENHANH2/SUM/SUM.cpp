#include <bits/stdc++.h> 
using namespace std; 
int a[6];
int main()
{
    freopen("SUM.inp","r",stdin);
    freopen("SIM.out","w",stdout);
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
    sort(a+1,a+6);
    cout<<a[1]+a[2]<<' '<<a[4]+a[5];
}

