#include <bits/stdc++.h> 
using namespace std; 
int f[100001];
int n;
int m=2;
int d;
int main()
{
    freopen("HAMMING.inp","r",stdin);
    freopen("HAMMING.out","w",stdout);
    cin>>n;
    d=0,f[1]=true;
    while(true)
    {
        if(m%2==0)if(f[m/2])f[m]=true;
        if(m%3==0)if(f[m/3])f[m]=true;
        if(m%5==0)if(f[m/5])f[m]=true;
        if(f[m])
        {
            d++;
            if(d==n)
            {
                cout<<m;
                return 0;
            }
        }
        m++;
    }
}