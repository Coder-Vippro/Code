#include <bits/stdc++.h> 
using namespace std; 
bool kt(string s)
{
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])return false;
    }
    return true;
}
string tong(string x,string k)
{
    string kq="";
    while (k.length()<x.length()) k='0'+k;
    while (k.length()>x.length()) x='0'+x;
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1+cs2+nho);
        nho=cs/10;cs=cs%10;
        kq=char(cs+48)+kq;
    }
    if(nho>0) kq='1'+kq;
    return kq;
}
string s,kq;
int main()
{
    freopen("PHEPCONG.inp","r",stdin);
    freopen("PHEPCONG.out","w",stdout);
    cin>>s;
    kq=s;
    while(kt(kq)==false)
    {
        kq=tong(kq,s);
    }
    cout<<kq;
}