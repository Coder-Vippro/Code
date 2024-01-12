#include <bits/stdc++.h>
using namespace std;
string s;
bool isvaild=true;
bool kt(char s, char k)
{
    if(s=='{' && k=='}')return true;
    if(s=='[' && k==']')return true;
    if(s=='(' && k==')')return true;
    return false;
}
int main()
{
    freopen("NGOAC.inp","r",stdin);
    freopen("NGOAC.out","w",stdout);
    while(getline(cin,s))
    {
        isvaild=true;
        for(int i=1;i<s.size();i++)
        {
            if(kt(s[i-1],s[i])==true)isvaild=true;
            else
            {
                isvaild=true;
                for(int j=i;j<s.size();j++)
                {
                    if(j==s.size()-j-1)break;
                    if(kt(s[j],s[s.size()-j-1])==false)
                    {
                        isvaild=false;
                        break;
                    }
                }
            }
        }
        if(isvaild==true)cout<<"CO"<<'\n';
        else cout<<"KHONG"<<'\n';
    }
}