#include <bits/stdc++.h>
using namespace std;
string n, m;
long long tong = 0;
int main()
{
    freopen("mult.inp", "r", stdin);
    freopen("mult.out", "w", stdout);
    cin >> n >> m;
    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < m.size(); j++)
        {
            tong += (n[i] - 48) * (m[j] - 48);
        }
    }
    cout << tong;
    return 0;
}