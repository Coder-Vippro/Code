#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> p;
string s;
int main()
{
    freopen("bai3.INP","r",stdin);
    freopen("bai3.OUT","w",stdout);
    cin>>n;
    int k=n;
    while (n>0)
    {
        p.push_back(n%2);
        n=n/2;
    }
    reverse(p.begin(),p.end());
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i];
    }
    cout<<'\n';
    while (k>0)
    {
        if(k%16<=9)
        {
            s=s+char(k%16+48);
        }
        else
        {
            if(k%16==10)s=s+'A';
            if(k%16==11)s=s+'B';
            if(k%16==12)s=s+'C';
            if(k%16==13)s=s+'D';
            if(k%16==14)s=s+'E';
            if(k%16==15)s=s+'F';
        }
        k=k/16;
    }
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}