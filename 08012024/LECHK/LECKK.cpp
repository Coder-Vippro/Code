#include <bits/stdc++.h>
using namespace std;
int n, x, k;
int h;
int dem = 0;
int main()
{
    freopen("LECHK.inp", "r", stdin);
    freopen("LECHK.out", "w", stdout);
    cin >> n >> x >> k;
    while (n--)
    {
        cin >> h;
        if (abs(h - x) <= k)
        {
            dem++;
        }
    }
    cout << dem;
    return 0;
}