#include <bits/stdc++.h> 
using namespace std; 
int tcu(int n)
{
    int dem=1;
    int i=2;
    int dem1=0;
    while(n>=i)
    {
        while(n%i==0)
        {
            n=n/i;
            dem1++;
        }
        dem=dem*(dem1+1);
        i++;
    }
    return dem-1;
}
int n;
int maxx=-1e9;
int tmp=0;
int main()
{
    freopen("CAU3.INP","r",stdin);
    freopen("CAU3.OUT","w",stdout);
    cin>>n;
    for(int i=0;i<n;i+=2)
    {
        if(tcu(i)>maxx && i%2==0 && i>0)
        {
            maxx=tcu(i);
            tmp=i;
        }
    }
    cout<<tmp;
}
