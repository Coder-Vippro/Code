#include <bits/stdc++.h> 
using namespace std; 
int a[100001];
int n,k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    if(n>k)cout<<a[k+1];
    else{
        cout<<a[k/n+1];
    }
}
