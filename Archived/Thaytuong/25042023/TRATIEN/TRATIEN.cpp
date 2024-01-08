#include <bits/stdc++.h>
using namespace std;
int n;
int t;
int main()
{
    freopen("TRATIEN.inp","r",stdin);
    freopen("TRATIEN.out","w",stdout);
    cin>>n;
    for(int i=n/100;i>=0;i--)
    {
        for(int j=0;j<=n/200;j++)
        {
           t=n-100*i-200*j;
           if(t>=0)
           {
                if(t%1000==0)
                {
                    cout<<i<<"x100+"<<j<<"x200+"<<t/1000<<"x1000\n";
                }
           } 
        }
    }
}