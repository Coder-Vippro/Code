#include <bits/stdc++.h>
using namespace std;
string a[100001];
int n;
int maxx=-1e9-1;
bool tong(string x,string k)
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
        if(nho>0)return false;
        kq=char(cs+48)+kq;
    }
    if(nho>0) return false;
    return true;
}
string tong1(string x,string k)
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
string tmp="";
int dem=0;
bool kt=true;
vector <string> p;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        tmp=a[i];
        for(int j=1;j<=n;j++)
        {
            if(j!=i && tong(tmp,a[j])==true)
            {
                tmp=tong1(tmp,a[j]);
                dem++;
            }
        }
        if(dem>maxx && dem>=0){maxx=dem;kt=true;}
        dem=0;
    }
    if(kt==true)maxx++;
    if(maxx>=0)
    cout<<maxx;
    else cout<<0;
}