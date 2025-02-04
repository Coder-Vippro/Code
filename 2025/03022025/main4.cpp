#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int n,k;
bool a[10001];
bool check(string s)
{
    a['v']=false;
    a['i']=false;
    a['k']=false;
    a['a']=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='v')a['v']=true;
        else if(s[i]=='i')a['i']=true;
        else if(s[i]=='k')a['k']=true;
        else if(s[i]=='a')a['a']=true;
    }
    if(a['v']&&a['i']&&a['k']&&a['a'])return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string tmp="";
        bool h=false;
        for(int i=1;i<=n;i++)
        {
            cin>>s;
            if(check(s))
            {
                //cout<<"YES"<<'\n';
                h=true;
            }
            tmp+=s[0];
        }
        if(check(tmp))h=true;
        if(!h)
        {
            cout<<"NO"<<'\n';
        }
        else cout<<"YES"<<'\n';
    }
    return 0;
}