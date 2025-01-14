#include <bits/stdc++.h>
using namespace std;
int n;
int k;
string s;
int maxx=-1e9-1;
int h;
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    h=n;
    while (n--)
    {
        cin>>k>>s;
        maxx=-1e9-1;
        dem=1;
        s+='1';
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])dem++;
            else 
            {
                if(dem>maxx)
                {
                    maxx=dem;
                }
                dem=1;
            }
        }
        cout<<"Case #"<<h-n<<": "<<maxx<<'\n';
    }
    
}