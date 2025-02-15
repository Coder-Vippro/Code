#include <bits/stdc++.h>
using namespace std;
int t;
int k=0;
string s;
int main()
{
    cin>>t;
    while (t--)
    {
        cin>>s;
        k=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                k=0;
                swap(s[i],s[i-1]);
                cout<<"YES"<<'\n'<<s<<'\n';
                break;
            }
            k=1;
        }
        if(k==1 || s.size()==1)cout<<"NO"<<'\n';
    }
    
}