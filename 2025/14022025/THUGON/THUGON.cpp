#include <bits/stdc++.h>
using namespace std;
string s;
void ans(string s)
{
    int dem=1;
    s+='a';
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dem++;
            //p=s[i-1];
        }
        else 
        {
            if(dem>1)
            cout << dem << s[i];
            else if(dem==1)
            cout << s[i];
            dem=1;
        }
    }
    cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("THUGON.INP", "r", stdin);
    freopen("THUGON.OUT", "w", stdout);
    while(cin>>s)
    {
        ans(s);
    }
    
}