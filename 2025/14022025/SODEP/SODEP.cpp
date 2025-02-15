#include <bits/stdc++.h>
using namespace std;
string s;
int tong=0;
int main()
{
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        tong+=s[i]-'0';
    }
    if(tong%10==9)cout<<1;
    else cout<<0;
}