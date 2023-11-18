#include <bits/stdc++.h>

using namespace std;
bool sosanh(string s)
{
    string k = s;
    reverse(s.begin(), s.end());
    if (s == k)
        return true;
    return false;
}
int ans(string s)
{
    string tmp = "";
    int kq = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            tmp += s[i];
        }
        else
        {
            if (sosanh(tmp) == true)
            {
                kq++;
            }
            tmp = "";
        }
    }
    return kq;
}
string s;
int main()
{
    freopen("CWORD.inp","r",stdin);
    freopen("CWORD.out","w",stdout);
    getline(cin, s);
    cout << ans(s);
    return 0;
}
