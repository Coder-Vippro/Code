#include <bits/stdc++.h>
using namespace std;
string s;
int maxx=-1e9;
string tmp="";
int n;
vector <string> a;
bool tl=false;
int sosanh(string x,string k)
{
    while (k.length()<x.length()) k='0'+k;
    while (k.length()>x.length()) x='0'+x;
    for(int i=0;i<x.size();i++)
    {
        if(k[i]>x[i])return 1;
        if(k[i]<x[i])return 2;
    }
    return 3;
}
int main()
{
    freopen("NUMBERS.inp","r",stdin);
    freopen("NUMBERS.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s;
        s+='a';
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                tmp+=s[i];
                tl=true;
            }
            else if(tl==true)
            {
                while(tmp[0]=='0' && tmp.size()>1)tmp.erase(tmp.begin());
                a.push_back(tmp);
                tmp="";
                tl=false;
            }
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if(sosanh(a[i],a[j])==1)swap(a[i],a[j]);
        }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<'\n';
    }
    
}