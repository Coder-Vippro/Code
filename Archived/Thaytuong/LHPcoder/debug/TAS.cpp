#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100001];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    while(k--)
    { 
        if(a[n]>a[1])
        {
            a[n]-=1;
            a[1]+=1;
        }
        else if(a[n]==a[1]) break;
        sort(a+1,a+n+1);
    }
    cout<<a[n]-a[1];
}