#include <bits/stdc++.h>
using namespace std;
string s;
string xuly(string t)
{
    while(t[0]=='0' && t.length()>1)t.erase(0,1);
    return t;
}
bool cmp(string a, string b)
{
    if(a.length()!=b.length())return a.length()<b.length();
    return a<b;
}
vector<string> v;
string t="";
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>s;
    s+='a';
    for (int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            t+=s[i];
        }
        else if(t.length()>0)
        {
            v.push_back(xuly(t));
            t="";
        }
    }
    if(v.size()==0)
    {
        cout<<0;
        return 0;
    }
    sort(v.begin(),v.end(),cmp);
    cout<<v[v.size()-1];
}