#include <bits/stdc++.h> 
using namespace std; 
int a,b;   
int c[100001];
int n;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CAU3.inp","r",stdin);
    freopen("CAU3.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            c[j]++;
        }
    }
    sort(c+1,c+1+n);
    cout<<c[n];
    
}