#include <bits/stdc++.h>
using namespace std;
int dem=0;
string s;
int main()
{
    freopen("DATBANH.inp","r",stdin);
    freopen("DATBANH.out","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')dem+=2;
        else dem+=3;
    }
    cout<<dem;
}