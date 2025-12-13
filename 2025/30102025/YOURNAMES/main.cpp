#include <bits/stdc++.h>
using namespace std;
int n;
int t;
string s,k;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>t>>s>>k;
        sort(s.begin(),s.end());
        sort(k.begin(),k.end());
        if(s==k)cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
}