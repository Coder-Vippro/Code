#include <bits/stdc++.h>
using namespace std;
#define N int(1e7)
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
int kq(int n)
{
    int ans = n - 1;
    if (p[n] == 0)
    {
        for (int i = n - 1; i >= 2; --i)
        {
            if (n % i == 0)
            {
                ans = i;
                break;
            }
        }
    }
    return ans;
}
int n;
int main()
{
    freopen("UOCTS.inp", "r", stdin);
    freopen("UOCTS.out", "w", stdout);
    cin >> n;
    sangnt(n);
    cout << kq(n);
    return 0;
}