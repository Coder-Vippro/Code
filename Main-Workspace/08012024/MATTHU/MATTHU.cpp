#include <bits/stdc++.h>
using namespace std;
string s;
int tmp = 0;
int main()
{
    freopen("MATTHU.inp", "r", stdin);
    freopen("MATTHU.out", "w", stdout);
    cin >> s;
    s += 'a';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            tmp = tmp * 10 + (s[i] - 48);
        }
        else
        {
            cout << char(tmp);
            tmp = 0;
        }
    }
    return 0;
}