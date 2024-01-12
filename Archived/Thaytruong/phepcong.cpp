#include <bits/stdc++.h>
using namespace std;
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
}string kq="0",s1,s2,s3;
 void doi(string s1 ,string s2,string s3){
     char t;int dau;string kq="0";
    cin>>s1>>t>>s2>>t>>s3;
                for(int i=0;i<s1.size();i++)
        if(s1[i]=='t'){t=1;dau=i;break;}
      for(int i=0;i<s2.size();i++)
        if(s2[i]=='t'){t=2;dau=i;break;}
       for(int i=0;i<s3.size();i++)
        if(s3[i]=='t'){t=3;dau=i;break;}

    if(t==1){kq=hieu(s3,s2);cout<<kq<<" + "<<s2<<" = "<<s3<<'\n';}
    if(t==2){kq=hieu(s3,s1);cout<<s1<<" + "<<kq<<" = "<<s3<<'\n';}
    if(t==3){kq=tong(s1,s2);cout<<s1<<" + "<<s2<<" = "<<kq<<'\n';}
}
int main()
{
    freopen("PHEPCONG.inp","r",stdin);
    freopen("PHEPCONG.out","w",stdout);
    char t;int dau,n;cin>>n;
    for(int i=1;i<=n;i++){cin>>s1>>t>>s2>>t>>s3;doi(s1,s2,s3);}

    return 0;
}
