#include <bits/stdc++.h> 
using namespace std; 
string s;
int dem=0;
int maxx=0;
int main()
{
    freopen("KTS.inp", "r", stdin);
    freopen("KTS.out", "w", stdout);
    cin>>s;
    s.push_back('a');
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            dem++;
        }
        else 
        {
            if(dem>maxx)
            {
                maxx=dem;
            }
            dem=0;
        }
    }
    cout<<maxx;

}