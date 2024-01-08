#include <bits/stdc++.h>
#define N int(1e7)
using namespace std;
int p[N + 5];
void sangnt(int n)
{
    fill(p, p + n + 1, 1);
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (p[i] == 1)
            for (int j = i * i; j <= n; j += i)
                p[j] = 0;
    }
}
int n;
long long tong = 0;
int main()
{
    freopen("tongngto.inp", "r", stdin);
    freopen("tongngto.out", "w", stdout);
    cin >> n;
    sangnt(n);
    for (int i = 1; i <= n; i++)
    {
        if (p[i] == 1)
            tong += i;
    }
    cout << tong;
    return 0;
}