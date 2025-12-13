#include <bits/stdc++.h>
using namespace std;
vector <long long> ans;
int n;
string s;
long long tong=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '1' || s[i] == '2' ||s[i] == '3' ||s[i] == '5' ||s[i] == '7')
        {
            tong=tong*10+(s[i]-'0');
        }
        else
        {
            ans.push_back(tong);
            tong=0;
        }
    }
    if(tong>0) ans.push_back(tong);
    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1];
}