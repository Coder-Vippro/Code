#include <bits/stdc++.h> 
using namespace std; 
int n;
double x;
double a[101];
bool kt=false;
int f,l;
double k;
int main()
{
    freopen("POS.inp","r",stdin);
    freopen("POS.out","w",stdout);
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]<0){cout<<fixed<<setprecision(2)<<a[i]<<' ';break;}
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=0)k=a[i];
        if(a[i]==x && kt==false)
        {
            f=i;
            kt=true;
        }
        else if(a[i]==x && kt==true)
        {
            l=i;
        }
    }
    cout<<fixed<<setprecision(2)<<k<<'\n';
    cout<<f<<' '<<l;
}