#include <bits/stdc++.h> 
using namespace std; 
string s,k;
string tmp1="",tmp2="",tmp3="",tmp4="";
int so=0;
int main()
{
    freopen("DAQUY.INP","r",stdin);
    freopen("DAQUY.OUT","w",stdout);
    getline(cin,s);
    //getline(cin,k);
    s.erase(s.begin());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            s.erase(s.begin()+i);
            i--;
        }
    }
    for(int i=1;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='z')
        {
            if(s[i-1]>='0' && s[i-1]<='9' &&  s[i-2]<='a' && s[i-2]>='9')
            {
                s.erase(s.begin()+i-1);
                cout<<s<<endl;
            }
        }
    }
    cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='z')
        {
            tmp1+=s[i];
        }
        else if(s[i]>='1' && s[i]<='9')
        {
            while(s[i]>='1' && s[i]<='9')
            {
                so=so*10+(s[i]-48);
                cout<<so<<'\n';
                i++;
                if(s[i]==' ')break;
            }
        }
        if(so>=1)
        {
            while(so--)tmp1=tmp1+tmp1;
            cout<<tmp1<<'\n';
        }
        tmp2=tmp2+tmp1;
        tmp1="";
        so=0;
    }
    cout<<tmp2;

}