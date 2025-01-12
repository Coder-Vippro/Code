#include <bits/stdc++.h>   
using namespace std;
string s;
bool check(int n)
{
    if(n==2 || n==3 || n==5|| n==7)return true;
    return false;
}
int ts[10];
bool found=false;
int main()
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(ts[s[i]-48]==0 && check(s[i]-48)==true)
        {
            cout<<s[i]<<' ';
            ts[s[i]-48]++;
            found=true;
        }
    }
    if(found==false)cout<<0;
    return 0;
}