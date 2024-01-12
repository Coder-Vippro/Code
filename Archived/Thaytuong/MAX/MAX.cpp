#include <bits/stdc++.h> 
using namespace std; 
int n;
string s;
int maxx=-1e9;
int k;
string tmp="";
int main()
{
    freopen("MAX.inp","r",stdin);
    freopen("MAX.out","w",stdout);
    cin>>n>>s;
    s.push_back('a');
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9'){
            tmp+=s[i];
        }
        else {
            stringstream ss(tmp);
            ss>>k;
            if(k>maxx)maxx=k;
            ss.clear();
            tmp="";
        }
    }
    cout<<maxx;
}