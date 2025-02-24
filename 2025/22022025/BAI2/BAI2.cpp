#include <bits/stdc++.h>
using namespace std;
string s;
void ans(string s)
{
    int dem = 0;
    int dem1 = 0;
    int dem2 = 0;
    int dem3 = 0;
    string tmp="";
    for (int i = 0; i < s.size(); i++)
    {
        dem1=0;
        dem2=0;
        dem3=0;
        tmp="";
        for(int j=i;j<s.size();j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                dem1++;
                tmp+=s[j];
            }
            else if (s[j] >= 'A' && s[j] <= 'Z')
            {
                dem2++;
                tmp+=s[j];
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                dem3++;
                tmp+=s[j];
            }
            if(dem1>0&&dem2>0&&dem3>0 && tmp.size()>=6)
            {
                dem++;
            }
        }
    }
    cout<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    cin>>s;
    ans(s);
}