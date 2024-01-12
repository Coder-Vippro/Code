#include <bits/stdc++.h> 
using namespace std; 
string a,b,c,d;
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
string tong1="";
int main()
{
    freopen("TONG.INP","r",stdin);
    freopen("TONG.OUT","w",stdout);
    cin>>a>>b>>c>>d;
    if((a[a.size()-1]-48)%2==0)
    {
        tong1=tong(tong1,a);
    }
    if((b[b.size()-1]-48)%2==0)
    {
        tong1=tong(tong1,b);
    }
    if((c[c.size()-1]-48)%2==0)
    {
        tong1=tong(tong1,c);
    }
    if((d[d.size()-1]-48)%2==0)
    {
        tong1=tong(tong1,d);
    }
    cout<<tong1;
}