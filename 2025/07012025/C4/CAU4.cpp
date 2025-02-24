#include <bits/stdc++.h>
using namespace std;
string s;
long long a=0,b=0;
int main()
{
    freopen("CAU4.INP","r",stdin);
    freopen("CAU4.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        {
            a++;
        }
        else b++;
    }
    cout<<a*b;
}
