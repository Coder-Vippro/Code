#include <bits/stdc++.h>

using namespace std;
string s,l;
pair<string,int> p[1000001];
pair<string,int> h[1000001];
int k=1;
bool isvaild=false;
int dem1=0;
string s1="",s2="";
int main()
{
    freopen("DAQUY.INP","r",stdin);
    freopen("DAQUY.OUT","w",stdout);
    //decrypt the string s

    getline(cin,s);
    getline(cin,l);
    for(int i=0;i<s.size();i++)
    {
        while(s[i]>='A' && s[i]<='z')
        {
            p[k].first+=s[i];
            i++;
            isvaild=true;
        }
        i++;
        while(s[i]>='0' && s[i]<='9')
        {
            p[k].second=p[k].second*10+s[i]-48;
            i++;
            isvaild=true;
        }
        if(isvaild==true)
        {
            k++;
            isvaild=false;
        }
    }
    k--;
    for(int i=1;i<=k;i++)
    {
        int tmp=p[i].second;
        while(tmp--)
        {
            s1=s1+p[i].first;
        }
    }
    //decrypt the string k

    k=1;
    isvaild=false;
    for(int i=0;i<l.size();i++)
    {
        while(l[i]>='A' && l[i]<='z')
        {
            h[k].first+=l[i];
            i++;
            isvaild=true;
        }
        i++;
        while(l[i]>='0' && l[i]<='9')
        {
            h[k].second=h[k].second*10+l[i]-48;
            i++;
            isvaild=true;
        }
        if(isvaild==true)
        {
            k++;
            isvaild=false;
        }
    }
    k--;
    for(int i=1;i<=k;i++)
    {
        int tmp=h[i].second;
        while(tmp--)
        {
            s2=s2+h[i].first;
        }
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        cout<<"CO"<<'\n';
    }
    else cout<<"KHONG"<<'\n';
    cout<<s1.size()<<' '<<s2.size();
    return 0;
}
