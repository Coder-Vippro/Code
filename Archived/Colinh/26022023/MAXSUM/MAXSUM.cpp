#include <bits/stdc++.h>
using namespace std;
int a[100001],n;
int tmp;
int kq=0;
int main()
{
    freopen("MAXSUM.INP","r",stdin);
    freopen("MAXSUM.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;)
    {
       
        kq=kq+a[i]-a[i+1];  
        i+=2;
        
    }
    
}