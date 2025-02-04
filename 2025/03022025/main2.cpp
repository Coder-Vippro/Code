#include <bits/stdc++.h>
using namespace std;
int t;
int a[101];
int n;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        a[1]++;
        long long h=1;
        for(int i=1;i<=n;i++)
        {
            h*=a[i];
        }
        cout<<h<<'\n';
    }
    return 0;
}