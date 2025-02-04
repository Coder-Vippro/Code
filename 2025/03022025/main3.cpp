#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        string ans="";
        for(int i=1;i<=8;i++)
        {
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!='.')ans+=s[i];
            }
        }
        cout<<ans<<'\n';
    }
}
