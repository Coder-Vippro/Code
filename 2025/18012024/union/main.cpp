#include <bits/stdc++.h>
using namespace std;
unordered_set<int>s;
int n,m;
string query1;
int a,b;
int main()
{
    cin>>n>>m;
    while(m--)
    {
        cin>>query1>>a>>b;
        if(query1=="union")
        {
            s.insert(a);
            s.insert(b);
        }
        else
        {
            if(s.find(a)!=s.end()&&s.find(b)!=s.end())
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}