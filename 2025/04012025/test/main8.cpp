#include <bits/stdc++.h>
using namespace std;
bool tcs(int n)
{
    int tong=0;
    while(n>0)
    {
        tong+=n%10;
        n/=10;
    }
    return tong%2==0;
}
int dem=0;
int main()
{
    //freopen("main8.inp","r",stdin);
    //freopen("main8.out","w",stdout);
    int n;
    cin>>n;
    if(n%2==0 && tcs(n))
    {
        cout<<n/2;
    }
    else if(n%2==1 && tcs(n))
    {
        cout<<n/2;
    }
    else if(n%2==0 && !tcs(n))
    {
        cout<<n/2-1;
    }
    else cout<<n/2;
    /*while(n--)
    {
        int t;
        cin>>t;
        dem=0;
        for(int i=1;i<=t;i++)
        {
            if(tcs(i))
            {
                dem++;
            }
        }
        cout<<dem<<'\n';
    }
    */
}