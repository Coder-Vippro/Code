#include <bits/stdc++.h> 
using namespace std; 
string s,tmp;
int maxx1=0;
bool kt (string s)
{
    int dem=1;
    sort(s.begin(),s.end());
    int maxx=-1e9;
    int dem2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])dem++;
        else
        {
            if(dem>maxx)
            {
                maxx=dem;
                dem=1;
            }
        } 
        if(maxx>s.size()-maxx)return true;
    }
    if(maxx>s.size()-maxx)
    return true;
    return false;
}
int main()
{
    freopen("MatDo.INP","r",stdin);
    freopen("MatDo.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        tmp=s.substr(0,i);
        if(kt(tmp)==true)
        {
            if(tmp.size()>maxx1)
            {
                maxx1=tmp.size();
            }
        }
    }
    cout<<maxx1;
}