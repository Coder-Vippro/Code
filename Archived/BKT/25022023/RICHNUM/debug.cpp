#include <bits/stdc++.h> 
using namespace std; 
int f[10005],l,r;
bool tcs(int n)
{
    int tong=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            tong=tong+i;
        }
        if(tong>n)return true;
    }
    if(tong>n)return true;
    return false;
}
int k=0,i=1,n;
int main()
{
    freopen("RICHNUM.INP","r",stdin);
    freopen("RICHNUM.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            if(tcs(i)==true){k++;cout<<i<<' ';}
        }
        cout<<k<<'\n';
        k=0;
    }
    return 0;
}