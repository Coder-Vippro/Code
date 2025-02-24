#include <bits/stdc++.h>
using namespace std;
string s;
bool cmp (char a, char b)
{
    return a>b;
}
bool l=false;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("MATMA.INP","r",stdin);
    freopen("MATMA.OUT","w",stdout);
    cin>>s;
    int tong=0;
    for(int i=0;i<s.size();i++)
    {
        tong+=s[i]-'0';
        if(s[i]=='0')l=true;
    }
    if(tong%3!=0 || l==false)
    {
        cout<<-1;
        return 0;
    }
    sort(s.begin(),s.end(),cmp);
    cout<<s;
}