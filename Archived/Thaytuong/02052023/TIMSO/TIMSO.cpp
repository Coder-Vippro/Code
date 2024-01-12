#include <bits/stdc++.h> 
using namespace std; 
int dem=0;
int maxx=-1e9;
int tmp;
int l,r;
int demuoc(int n)
{
    int i=2;
    int dem=1;
    int dem2=0;
    while(i<=n)
    {
        while (n%i==0)
        {
            n/=i;
            dem2++; 
        }
        dem=(dem2+1)*dem;
        dem2=0;
        i++;
    }
    return dem;
}
int main()
{
    freopen("TIMSO.inp","r",stdin);
    freopen("TIMSO.out","w",stdout);
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        int k=demuoc(i);
        if(k>maxx)
        {
            maxx=k;
            tmp=i;
        }
    }
    cout<<tmp<<' '<<maxx;
}