#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
int b[1000005];
int main()
{
    freopen("WORK.INP","r",stdin);
    freopen("WORK.OUT","w",stdout);
    cin>>n;
    int tong=0;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n-1;)
    {   
            if(a[i]+a[i+1]>b[k])
            {
                tong+=b[i];
                i+=2;
                k+=2;
            }
            else
            {
                tong+=a[i];
                k++;
            }
            if(i==n+1)
            {
                tong+=a[n];
                i++;
            }
        
    }
    cout<<tong;
}