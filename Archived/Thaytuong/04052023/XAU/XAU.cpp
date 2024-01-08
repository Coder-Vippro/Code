#include <bits/stdc++.h>
using namespace std;
string s;
string tmp="";
int dem=0;
int main()
{
    freopen("XAU.inp","r",stdin);
    freopen("XAU.out","w",stdout);
    cin>>s;
    for(int i=0;i<=s.size();i++)
    {
        for(int j=0;j<=i;j++)
        {
            tmp+=s[j];
        }
        int tong=(tmp[tmp.size()-2]-48)*10+tmp[tmp.size()-1]-48;
        if(tong%4==0)dem++;
        tmp="";
    }
    cout<<dem;
}