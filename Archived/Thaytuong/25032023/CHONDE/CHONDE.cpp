#include <bits/stdc++.h> 
using namespace std; 
int x,y,z;
unsigned long long kq=0;
unsigned long long C(int k, int n) 
{
    if (k == 0 || k == n) return 1;
    if(k>n)return 0;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
    freopen("CHONDE.inp","r",stdin);
    freopen("CHONDE.out","w",stdout);
    cin>>z>>y>>x;
    if(x<0 || y<0 || z<0)
    {
        cout<<0;
        return 0;
    }
    kq=kq+(C(2,x)*C(2,y)*C(1,z)) + (C(2,x)*C(1,y)*C(2,z)) + (C(3,x)*C(1,y)*C(1,z));
    cout<<kq;
    return 0;
}