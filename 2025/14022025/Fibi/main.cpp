#include <bits/stdc++.h>
using namespace std;
string s;int dung;
vector<string> vet,tes;
string operator+(string a,string b)
{
    while(a.size()>b.size())b='0'+b;
    while(a.size()<b.size())a='0'+a;
    string kq="";int nho=0,cs=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        cs=a[i]+b[i]-96+nho;
        nho=cs/10;cs%=10;
        kq=char(cs+48)+kq;
    }
    if(nho==1)kq='1'+kq;
    return kq;
}
void lam(int tt,string s,int vt)
{
    for(int i=vt+1;i<s.size();i++)
    {

        string s1=s.substr(vt+1,i-vt);
        tes[tt]=s1;
        if(tt>=2)
        {
            if(tes[tt]!=tes[tt-1]+tes[tt-2])
                continue;
            if(i==s.size()-1)
            {
                dung=1;
                vet.push_back(tes[tt]);
                return ;
            }
        }
        lam(tt+1,s,i);
        if(dung==1)
        {
            vet.push_back(tes[tt]);
            return ;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>s;tes.resize(1000);
    lam(0,s,-1);
    if(vet.size()==0)
    {
        cout<<0;
        return 0;
    }
    for(int i=vet.size()-1;i>=0;i--)
    {
        cout<<vet[i]<<' ';
    }
    return 0;
}