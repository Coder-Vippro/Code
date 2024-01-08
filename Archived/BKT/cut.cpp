#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("cut.inp","r",stdin);
    freopen("cut.out","w",stdout);
    string s, p;
    cin>>s>>p;
    int a=p.size(), d=0;
    for(int i=0;i<s.size();i++)
    {
        string k=s.substr(i, a);
        if(k==p){d++;i=i+a-1;}
    }
    cout<<d;
    return 0;
}
