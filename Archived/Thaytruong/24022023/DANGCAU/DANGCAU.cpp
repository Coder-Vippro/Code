#include <bits/stdc++.h> 
using namespace std; 
int n;
string s,k;
bool ss(string s,string k)
{
    vector<int>p;
    vector<int>l;
    if(s.size()!=k.size())return false;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                p.push_back(j);
                p.push_back(i); 
            }
        }
    }
    for(int i=0;i<k.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(k[i]==k[j])
            {
                l.push_back(j);
                l.push_back(i); 
            }
        }
    }
    for(int i=0;i<p.size();i++)
    {
        if(p[i]!=l[i])return false;
    }
    return true;
}
int main()
{
    freopen("DANGCAU.INP","r",stdin);
    freopen("DANGCAU.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s>>k;
        if(ss(s,k)==true)cout<<"CO"<<'\n';
        else cout<<"KHONG"<<'\n';
    }
    return 0;
}