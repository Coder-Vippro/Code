#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("XAU19.INP","r",stdin);
    freopen("XAU19.OUT","w",stdout);
    getline(cin,s);
    int n=s.size();
    for(int i=1;i<=n;i++)
        if(s[i] == ' ' && s[i+1]==' ')
    {
        s.erase(i,1);
        i--;
    }
    if(s[0] ==' ')
         s.erase(0,1);
    if(s[s.size()]== ' ')
        s.erase(s.size()-1,1);

    for(int i=0;i<n;i++)
    {
        if('A' <= s[i] && s[i] <= 'Z')  s[i]+=32;
        if(s[i-1] == ' ' || i==0)
            if(('a'<= s[i] && s[i]<='z')) s[i]-=32;
    }
    cout<<s;

    return 0;
}

