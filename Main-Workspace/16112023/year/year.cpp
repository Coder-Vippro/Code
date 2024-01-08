#include <bits/stdc++.h>
using namespace std;
int n;
bool kt(string s)
{
    sort(s.begin(), s.end());
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            return false;
    }
    return true;
}
int main()
{
    freopen("year.inp", "r", stdin);
    freopen("year.out", "w", stdout);
    cin >> n;
    while (1 > 0)
    {
        n++;
        string nam = to_string(n);
        if (kt(nam) == true)
        {
            cout << n << '\n';
            break;
        }
    }

    return 0;
}
