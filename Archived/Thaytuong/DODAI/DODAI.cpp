#include <bits/stdc++.h> 
using namespace std; 
int n;
string s;
int maxx=-1e9;
int dem=0;
int main()
{
    freopen("DODAI.inp","r",stdin);
    freopen("DODAI.out","w",stdout);
    cin>>n>>s;
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
                dem=0;
            }
            dem=0;
        }
    }
    cout<<maxx;
}