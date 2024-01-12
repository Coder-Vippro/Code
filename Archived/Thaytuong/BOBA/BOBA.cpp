#include <bits/stdc++.h> 
using namespace std;
string tmp="";
string s;
int dem=0;
int maxx=-1e9;
int vt=0;
int n;
int main()
{
    freopen("BOBA.inp","r",stdin);
    freopen("BOBA.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            tmp="";
            dem=0;
            vt=0;
            tmp=tmp+s[i]+s[i+1]+s[i+2];
            while(vt<s.size())
            {
                if(s.find(tmp,vt)<=s.size())
                {
                    vt=s.find(tmp,vt);
                    dem++;
                }
                vt++;
            }
            if(dem>maxx)maxx=dem;
        }
        cout<<maxx<<'\n';
        maxx=-1e9;
    }
}