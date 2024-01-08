#include <bits/stdc++.h> 
using namespace std; 
string s;
int main()
{
    freopen("CHECK.inp","r",stdin);
    freopen("CHECK.out","w",stdout);
    cin>>s;
    if(s[0]=='-')s.erase(0);
    if(s[0]+s[1]==s[2]+s[3])cout<<"YES";
    else cout<<"NO";
    return 0;
}