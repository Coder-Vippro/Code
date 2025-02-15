#include <bits/stdc++.h>
using namespace std;
int n;
string s,k;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>s>>k;
        swap(s[0],k[0]);
        cout<<s<<' '<<k<<'\n';
    }
}