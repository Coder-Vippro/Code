#include <bits/stdc++.h>

using namespace std;
string s[1001];
int h = 0;
int n, m;
int nm;
string k;
int minn = 1e9 + 1;
int sosanh(string l, string k)
{
    int dem = 0;
    for (int i = 0; i < min(l.size(), k.size()); i++)
    {
        if (l[l.size() - i] == k[k.size() - i])
            dem++;
        else
            break;
    }
    return dem;
}
int main()
{
    freopen("LYRICS.inp", "r", stdin);
    freopen("LYRICS.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin.ignore();
        getline(cin, s[i], '\n');
        cin.ignore();
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + m; j <= n; j += m)
        {
            if (j <= n)
                nm = sosanh(s[i], s[j]);
            if (nm > 0)
                minn = min(sosanh(s[i], s[j]), minn);
        }
    }
    if (minn == 1e9 + 1)
    {
        cout << 0;
        return 0;
    }
    cout << minn;
    return 0;
}
