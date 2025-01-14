#include <bits/stdc++.h>
using namespace std;
int a[100001];
int b[100001];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=n;i>=1;i--)
    {
        b[i]=-a[n-i+1];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
    for(int i=1;i<=n;i++)
    {
        cout<<b[i]<<' ';
    }
    return 0;
}