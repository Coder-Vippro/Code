#include <bits/stdc++.h>
using namespace std;
int n;
bool sd(int n)
{
    if(n==0)return true;
    int dem=0;
    int tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        dem++;
        n=n/10;
    }
    if(tong%dem==0)return true;
    return false;
}
int dem=0;
int i=0;
int main()
{
    freopen("BEAUTY.inp","r",stdin);
    freopen("BEAUTY.out","w",stdout);
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    while(dem<n)
    {
        i++;
        if(sd(i)==true)
        {
            dem++;
        }
    }
    cout<<i;
}
