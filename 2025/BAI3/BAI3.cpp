#include <bits/stdc++.h>
using namespace std;
string s,s1,s2,s3,s4,s5;
string check(string s,string k)
{
    set<char>set1 (s.begin(),s.end());
    set<char>set2 (k.begin(),k.end());
    if(set1==set2)return "YES";
    return "NO";
}
int main()
{
    cin>>s>>s1>>s2>>s3>>s4>>s5;
    cout<<check(s,s1)<<'\n'<<check(s2,s3)<<'\n'<<check(s4,s5);
}