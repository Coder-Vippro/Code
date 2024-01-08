#include <bits/stdc++.h>
using namespace std;
string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string s,h;
//tim vt trong bang chu cai
int findchar(char s)
{
    for(int i=1;i<=26;i++)
    {
        if(s==a[i])
        return i;
    }
    return -1;
}
int main()
{
    cin>>s;
    //ma hoa
    for (int i = 0; i < s.size(); i++)
    {
        cout<<a[(findchar(s[i])+5)%26];
    }
    cout<<'\n';
    //giai ma
    cin>>h;
    for(int i=0;i<h.size();i++)
    {
        cout<<a[(findchar(h[i])+21)%26];
    }
    return 0;
}