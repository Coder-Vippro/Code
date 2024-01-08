#include <bits/stdc++.h>
using namespace std;
string kq="2";
int n,k;
string tong2="0";
string a,b;
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
string sosangxau(int n) {
    stringstream ss;
    ss << n;
    return ss.str();
}
string hieu(string x,string k)
{
    string kq="";
    while (k.length()<x.length()) k='0'+k;
    while (k.length()>x.length()) x='0'+x;
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1-cs2+nho);
        if(cs<0) {cs=cs+10;nho=-1;}else nho=0;
        cs=cs%10;
        kq=char(cs+48)+kq;
    }
    while(kq[0]=='0' && kq.length()>1) kq.erase(0,1);
    return kq;
}
string nhan(string a, string b)
{
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
        tmp+=carry;
        carry=tmp/10;
        res=char(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stringstream ss;
    //freopen("DORAEMON.inp","r",stdin);
    //freopen("DORAEMON.out","w",stdout);
    cin>>n>>k;
    ss << n;
    std::string str = ss.str();
    a << str;
    ss.clear();
    ss << k;
    str = ss.str();
    b << str;
    ss.clear();
    for(int i=1;i<n;i++)
    {
        kq=nhan(kq,"2");
    }
    for(int i=k+1;i<n;i++)
    {
        tong2=tong(tong2,sosangxau(2*(n-i+1)));
    }
    cout<<hieu(kq,hieu(tong2,"2"));
    
    
}