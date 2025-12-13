#include <bits/stdc++.h>
using namespace std;
int n;
int a,b,c,d;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d)
        {
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
}