#include <bits/stdc++.h>
using namespace std;
int ans(string s, int k)
{
    vector <int> p;
    bool h=true;
    bool l=true;
    s+='a';
    int tmp=0;
    int dem=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            if(s[i-1]=='-' && l==true)
            {
                h=false;
                l=false;
            }
            else if(l==true)
            {
                h=true;
                l=false;
            }
            tmp=tmp*10+(s[i]-48);
        }
        else
        {
            if(h==true && l==false)
            {
                p.push_back(tmp);
                tmp=0;
            }
            else if(l==false)
            {
                p.push_back(-tmp);
                tmp=0;
            }
            h=true;
            l=true;
        }
    }
    for (int i=1;i<p.size();i++)
    {
        if(p[i]+p[i-1]==k)dem++;
    }
    return dem;
}
string s;
int k;
int n;
int main()
{
    //freopen("NHATKY.INP","r",stdin);
    //freopen("NHATKY.OUT","w",stdout);
    cin>>n;
    cin.ignore();
    getline(cin,s);
    cin>>k;
    cout<<ans(s,k);
}