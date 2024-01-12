<<<<<<< HEAD
<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
string s;
int tu=0,dem=0;
int vt1,vt2;
int main()
{
    freopen("XAU3.INP","r",stdin);
    freopen("XAU3.OUT","w",stdout);
    getline(cin,s);
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i] && s[i]==' ')
            {
                s.erase(s.begin()+i);
                i--;
            }
    }
    if(s[0]==' ')s.erase(s.begin());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            vt1=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            vt2=i;
            break;
        }
    }
    string k=s.substr(0,vt1);
    string h=s.substr(vt1+1,vt2-1-vt1);
    string l=s.substr(vt2+1,s.size()-1-vt2);
    cout<<k<<'\n'<<h<<'\n'<<l;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("XAU3.INP","r",stdin);
    freopen("XAU3.OUT","w",stdout);
    getline(cin,s);
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i] && s[i]==' ')
            {
                s.erase(s.begin()+i);
                i--;
            }
    }
    if(s[0]==' ')s.erase(s.begin());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
            {
                cout<<s[i];
            }
            else cout<<'\n';
    }
    return 0;
}
>>>>>>> ee810352bc862f737325a9c421e7e012b9a348cf
=======
#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("XAU3.INP","r",stdin);
    freopen("XAU3.OUT","w",stdout);
    getline(cin,s);
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i] && s[i]==' ')
            {
                s.erase(s.begin()+i);
                i--;
            }
    }
    if(s[0]==' ')s.erase(s.begin());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
            {
                cout<<s[i];
            }
            else cout<<'\n';
    }
    return 0;
}
>>>>>>> ee810352bc862f737325a9c421e7e012b9a348cf
