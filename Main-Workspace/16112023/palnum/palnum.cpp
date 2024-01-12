#include <bits/stdc++.h>
using namespace std;
bool ktdx(string s)
{
    string k = s;
    reverse(s.begin(), s.end());
    if (s == k)
        return true;
    return false;
}
string tong(string x, string k)
{
    string kq = "";
    while (k.length() < x.length())
        k = '0' + k;
    while (k.length() > x.length())
        x = '0' + x;
    int nho = 0, cs1, cs2, cs;
    for (int i = k.length() - 1; i >= 0; i--)
    {
        cs1 = x[i] - 48;
        cs2 = k[i] - 48;
        cs = (cs1 + cs2 + nho);
        nho = cs / 10;
        cs = cs % 10;
        kq = char(cs + 48) + kq;
    }
    if (nho > 0)
        kq = '1' + kq;
    return kq;
}
string s;
int main()
{
    freopen("palnum.inp", "r", stdin);
    freopen("palnum.out", "w", stdout);
    cin >> s;
    while (ktdx(s) == false)
    {
        string k = s;
        reverse(s.begin(), s.end());
        s = tong(k, s);
    }
    cout << s;
    return 0;
}