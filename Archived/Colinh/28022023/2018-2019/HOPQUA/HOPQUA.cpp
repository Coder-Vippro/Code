#include <bits/stdc++.h> 
using namespace std; 
int a[1000001];
int n;
int tong=0;
int k=1;
int main()
{
    //freopen("HOPQUA.INP","r",stdin);
    //freopen("HOPQUA.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        tong=tong+a[i];
    }
    sort(a+1,a+n+1);
    for(int i=n;i>=1;i--)
    {
        if(n>k)
        {
            tong=tong+max(0,a[n]-a[k]);
        }
        k++;
    }
    cout<<tong;


}