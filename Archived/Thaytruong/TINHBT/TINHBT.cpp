#include <bits/stdc++.h>

using namespace std;
int ss(string k,string x)
{
    while (k.length()<x.length()) k='0'+k;
    while (k.length()>x.length()) x='0'+x;
    if(k>x)
    {
        return 1;
    }
    else if(k<x)return -1;
    return 2;
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
string s;
string kq="";
string tmp="";
bool flag=true;
int main()
{
    //freopen("TINHBT.INP","r",stdin);
    //freopen("TINHBT.OUT","w",stdout);
    cin>>s;
    if(s[0]=='+')flag=true;
    else if(s[0]=='-') flag=false;
    else
    {
        s.insert(s.begin(),'+');
        flag=true;
    }
    s[s.size()]='+';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            if(flag==true)
            {
                int k=i+1;
                while(s[k]!='+' && s[k]!='-')
                {
                    tmp=tmp+s[k];
                    k++;
                }
                kq=tong(kq,tmp);
                tmp="";
            }
            else if(flag==false)
            {
                int k=i+1;
                while(s[k]!='+' && s[k]!='-')
                {
                    tmp=tmp+s[k];
                    k++;
                }
                if(ss(kq,tmp)==1)
                {
                    kq=hieu(kq,tmp);
                    flag=false;
                }
                else if(ss(kq,tmp)==-1)
                {
                    kq=hieu(tmp,kq);
                    flag=true;
                }
                else if(ss(kq,tmp)==2)
                {
                    kq.clear();
                    kq=kq+'0';
                }
                tmp="";
            }
        }
        else if(s[i]=='-')
        {
            if(flag==true)
            {
                int k=i+1;
                while(s[k]!='+' && s[k]!='-')
                {
                    tmp=tmp+s[k];
                    k++;
                }
                if(ss(kq,tmp)==1)
                {
                    kq=hieu(kq,tmp);
                    flag=true;
                }
                else if(ss(kq,tmp)==-1)
                {
                    kq=hieu(tmp,kq);
                    flag=false;
                }
                else if(ss(kq,tmp)==2)
                {
                    kq.clear();
                    kq=kq+'0';
                    flag=true;
                }
                tmp="";
            }
            else if(flag==false)
            {
                int k=i+1;
                while(s[k]!='+' && s[k]!='-')
                {
                    tmp=tmp+s[k];
                    k++;
                }
                kq=tong(kq,tmp);
                flag=false;
            }
            tmp="";
        }
    }
    if(flag==false)cout<<'-'<<kq;
    else cout<<kq;
    return 0;
}
