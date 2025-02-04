#include <bits/stdc++.h>
using namespace std;
int t;
void ans(string s)
{
    char c=s[0];
    int cnt=(s[1]-48);
    for(int i=1;i<=8;i++)
    {
        if(i!=cnt)
        {
            cout<<c<<i<<'\n';
        }
    }
    for(char i='a';i<='h';i++)
    {
        if(i!=c)
        {
            cout<<i<<cnt<<'\n';
        }
    }
}
string s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        ans(s);
    }
}