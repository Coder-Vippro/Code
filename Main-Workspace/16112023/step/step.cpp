#include <bits/stdc++.h>
using namespace std;
string s;
int n;
bool kt(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] < s[i - 1])
            return false;
    }
    return true;
}
int main()
{
    freopen("step.inp", "r", stdin);
    freopen("step.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (kt(s) == true)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}