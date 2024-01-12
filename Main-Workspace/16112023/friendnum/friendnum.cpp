#include <bits/stdc++.h>
using namespace std;
int tonguoc(int n)
{
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }

    return tong;
}
bool kt(int n, int m)
{
    int tong1 = tonguoc(n);
    int tong2 = tonguoc(m);
    if (tong1 == m && tong2 == n)
        return true;
    return false;
}
int n, m;
int main()
{
    freopen("friendnum.inp", "r", stdin);
    freopen("friendnum.out", "w", stdout);
    cin >> n >> m;
    if (kt(n, m) == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}