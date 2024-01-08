#include <bits/stdc++.h>
using namespace std;
int tong=0;
string s;
int main()
{
    freopen("CHUSO.inp","r",stdin);
    freopen("CHUSO.out","w",stdout);
    cin>>s;
    cout<<s.size()<<' ';
    for(int i=0;i<s.size();i++)
    {
        tong+=s[i]-48;
    }
    cout<<tong;
    return 0;
}