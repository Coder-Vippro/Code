#include <bits/stdc++.h> 
using namespace std; 
string s;
int dem=0;
int main()
{
    freopen("Kitu.INP","r",stdin);
    freopen("Kitu.OUT","w",stdout);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')dem++;
    }
    cout<<dem;
}