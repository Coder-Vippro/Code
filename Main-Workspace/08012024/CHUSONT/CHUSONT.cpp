#include <bits/stdc++.h>
using namespace std;
int p[10];
bool kt(int n)
{
    while (n > 0)
    {
        if (p[n % 10] != 1)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int n, x;
int dem = 0;
int main()
{
    freopen("CHUSONT.inp", "r", stdin);
    freopen("CHUSONT.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        p[i] = 0;
    }
    p[2] = 1, p[3] = 1, p[5] = 1, p[7] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (kt(x) == true)
        {
            dem++;
        }
    }
    cout << dem;
    return 0;
}