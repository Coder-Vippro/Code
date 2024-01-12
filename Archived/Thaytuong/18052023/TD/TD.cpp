#include <bits/stdc++.h> 
using namespace std; 
string s;
string w;
int dem=0;
int tong1=0;
int tong2=0;
int main()
{
    clock_t start, end;   
    double time_use;      
    start = clock();
    freopen("TD.inp","r",stdin);
    freopen("TD.out","w",stdout);
    cin>>w>>s;
    //count all the char from w string into tong2
    for(int i=0;i<w.length();i++)
    {
        tong2+=w[i];
    }
    string k=s.substr(0,w.size());
    for(int i=0;i<k.size();i++)
    {
        tong1+=k[i];
    }
    int h=w.size();
    for(int i=0;i<s.size();i++)
    {   
        if(tong1==tong2)dem++;
        tong1+=s[h];
        h++;
        tong1-=s[i];
        if(h>s.size())break;
    }
    cout<<dem<<'\n';
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Thoi gian chay: " << time_use << "s" << endl;
}
