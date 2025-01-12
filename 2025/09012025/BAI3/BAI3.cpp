#include <bits/stdc++.h>
using namespace std;
int n;
int k;
string s;
int main()
{
    cin>>n;
    while (n--)
    {
        cin>>s;
        vector <int>freq(300,0);
        bool h=false;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i]]==1)
            {
                cout<<i+1<<'\n';
                h=true;
                break;
            }
        }
        if(h==false)
        {
            cout<<-1<<'\n';
        }
    }
    return 0;
}