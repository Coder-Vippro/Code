#include <bits/stdc++.h> 
using namespace std; 
string s,k;

int main()
{
    freopen("ROTATION.INP","r",stdin);
    freopen("ROTATION.OUT","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>s>>k;
    int h=s.size()+1;
    while(h--)
    {
        s=s[s.size()-1]+s;
        s.erase(s.begin()+s.size()-1);
        if(s==k)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

}  