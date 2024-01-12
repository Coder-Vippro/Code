#include <bits/stdc++.h> 
using namespace std; 
string s,k;
int vt=0;
int vt2=0;
int dem=0;
int main()
{
    freopen("CUT.INP","r",stdin);
    freopen("CUT.OUT","w",stdout);
    cin>>s>>k;
    for(int i=0;i<s.size();i++)
    {
        vt=s.find(k,i);
        dem++;
        i=vt+k.size();
        
    }
    cout<<dem;
}
