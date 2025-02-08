#include <bits/stdc++.h>
using namespace std;
string s;
int tong=0;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {   
        tong+=s[i]-'0';
    }
    cout<<tong; 
}