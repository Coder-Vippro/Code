#include <bits/stdc++.h> 
using namespace std; 
string s;
int dem=0;
int main()
{
    freopen("TIMSO.inp","r",stdin);
    freopen("TIMSO.out","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='9')dem++;
    }
    if(dem==s.size())
    {
        cout<<s;
        return 0;
    }
    else
    {
        if(dem==s.size()-1)
        {
            cout<<s;
            return 0;
        }
        if(s[0]=='1' && dem==s.size()-1)
        {
            cout<<s;
            return 0;
        }
        if(char(s[0]-1)>'0')
        {
            cout<<char(s[0]-49+48);
            for(int i=0;i<s.size()-1;i++)
            {
                cout<<'9';
            }
            return 0;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            cout<<'9';
        }
    }
}