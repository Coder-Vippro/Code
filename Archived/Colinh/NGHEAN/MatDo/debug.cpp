#include <bits/stdc++.h> 
using namespace std; 
string s;
int main()
{
    cin>>s;
    int dem=1;
    sort(s.begin(),s.end());
    int maxx=-1e9;
    int dem2=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])dem++;
        else
        {
            if(dem>maxx)
            {
                maxx=dem;
                dem=1;
            }
        } 
    }
    cout<<maxx<<' '<<s.size();
   
}