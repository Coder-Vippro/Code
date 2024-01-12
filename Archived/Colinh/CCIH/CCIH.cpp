#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("CCIH.INP","r",stdin);
    freopen("CCIH.OUT","w",stdout);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            cout<<char(s[i]-32);
        }
        else cout<<s[i];
    }
}