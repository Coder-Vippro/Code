#include <bits/stdc++.h>
using namespace std;
string s;
map<char, int> hoa;
map<char, int> thuong;
map<char, int> so;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z') hoa[s[i]]++;
        else if(s[i]>='a' && s[i]<='z') thuong[s[i]]++;
        else if(s[i]>='0' && s[i]<='9') so[s[i]]++;
    }
    cout<<hoa.size()+thuong.size()+so.size()<<'\n';
    for(auto pair:hoa) cout<<pair.first<<' '<<pair.second<<'\n';
    for(auto pair:thuong) cout<<pair.first<<' '<<pair.second<<'\n';
    for(auto pair:so) cout<<pair.first<<' '<<pair.second<<'\n';
    return 0;
}