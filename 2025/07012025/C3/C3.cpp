#include <bits/stdc++.h>
using namespace std;
string s;
int tong=0;
int a[100001];
int main()
{
    //freopen("CAU3.INP","r",stdin);
    //freopen("CAU3.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        tong+=s[i]-48;
    }
    for(int i=1;i<s.size();i++)
    {
        a[i]=(s[i]-48)%3+a[i-1];
    }
    

}