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
int n, x;
int main()
{
    freopen("uocchanle.inp", "r", stdin);
    freopen("uocchanle.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (tonguoc(x) % 2 == 0)
            cout << "CHAN" << '\n';
        else
            cout << "LE" << '\n';
    }
    return 0;
}