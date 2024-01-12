#include <bits/stdc++.h>

using namespace std;
string f1,f2,f3,f4;
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
int n;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("FROG1.inp","r",stdin);
    //freopen("FROG1.out","w",stdout);
    cin>>n;
    f1="1";
    f2="2";
    f3="4";
    for (int i=4;i<=n;i++) 
    {
        f4=tong(tong(f1,f2),f3);
        f1=f2;f2=f3;
    }
    cout<<f4;
    return 0;
}
