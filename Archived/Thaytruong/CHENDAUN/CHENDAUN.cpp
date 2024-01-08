#include <bits/stdc++.h>
using namespace std;
int a[101],n;
long long t;
bool tim=false;
string bt()
{
    string s="";
    for(int i=1;i<=n;i++)
    {
        char cs=char(i+48);
        if(a[i]==1)s+='+';
        if(a[i]==2)s+='-';
        s=s+cs;
    }
    return s;
}
long long tinh(string s)
{
    long long so=0,kq=0;
    if(s[0]=='1')s='+'+s;
    s.push_back('+');
    char dau=s[0];
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]>='0'&& s[i]<='9')
        so=so*10+(s[i]-48);
        else if(dau=='+')
        {
            kq=kq+so;
            so=0;
            dau=s[i];
        }
        else if(dau=='-')
        {
            kq=kq-so;
            so=0;
            dau=s[i];
        }
    }
    return kq;
}
void sinh(int k)
{
    for(int i=0;i<3;i++)
    {
        a[k]=i;
        if(k==n)
        {
            string h=bt();
            if(tinh(h)==t){cout<<"="<<h<<'\n';
            tim=true;}
        }
        else sinh(k+1);

    }
}
int main()
{
    freopen("CHENDAUN.INP","r",stdin);
    freopen("CHENDAUN.OUT","w",stdout);
    cin>>n>>t;
    sinh(1);
    if(tim==false)cout<<"Khong tim duoc";
    return 0;
}
