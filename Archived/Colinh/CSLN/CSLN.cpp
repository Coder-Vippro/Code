#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("CSLN.INP","r",stdin);
    freopen("CSLN.OUT","w",stdout);
    cin>>s;
    if(s[0]=='-')s.erase(s.begin());
    sort(s.begin(),s.end());
    cout<<s[s.size()-1];
    return 0;
}