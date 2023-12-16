#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
    freopen("KIEUMOI.inp", "r", stdin);
    freopen("KIEUMOI.out", "w", stdout);
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s[0] >= 'A' && s[0] <= 'Z')
        {
            cout << char(s[0] + 32);
        }
        else
            cout << s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cout << '_' << char(s[i] + 32);
            }
            else
                cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}