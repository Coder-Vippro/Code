#include <bits/stdc++.h>
using namespace std;
int n;
string s[100005];
pair <int,int> p[100005];

int count_digits(const string& s) 
{
    int tong=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            tong++;
        }
    }
    return tong;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("TROCHOI.INP","r",stdin);
    freopen("TROCHOI.OUT","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        p[i].first=count_digits(s[i]);
        p[i].second=i;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        cout<<s[p[i].second]<<'\n';
    }
}