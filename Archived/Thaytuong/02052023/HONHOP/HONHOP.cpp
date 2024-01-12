#include <bits/stdc++.h> 
using namespace std; 
string s;
int tong=0;
int gt(char k)
{
    if(k=='I')return 1;
    if(k=='V')return 5;
    if(k=='X')return 10;
    if(k=='L')return 50;
    if(k=='C')return 100;
    if(k=='D')return 500;
    if(k=='M')return 1000;
    return 0;
}
int main()
{
    freopen("HONHOP.inp","r",stdin);
    freopen("HONHOP.out","w",stdout);
    cin>>s;
    for (int i = 0; i < s.size()-2; i+=2)
    {
        if(gt(s[i+1])<gt(s[i+3]))
        {
            tong=tong-(s[i+2]-48)*gt(s[i+3]);
        }
        else tong=tong+(s[i]-48)*gt(s[i+1]);
    }
    tong=tong+gt(s[s.size()-1])*(s[s.size()-2]-48);
    cout<<tong;
}