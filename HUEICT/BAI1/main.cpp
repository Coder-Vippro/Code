#include <bits/stdc++.h>
using namespace std;
string s;
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A' || s[i]=='H' || s[i]=='K' ||s[i]=='N' || s[i]=='R' ||s[i]=='W')dem+=2;
        else if(s[i]=='M')dem+=3;
        else dem+=1;
    }
    cout<<dem;
}