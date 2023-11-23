#include <bits/stdc++.h>
using namespace std;
long long n, m;
int GCD(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    freopen("pstoigian.inp", "r", stdin);
    freopen("pstoigian.out", "w", stdout);
    cin >> n >> m;
    long long k = GCD(n, m);
    cout << n / k << '/' << m / k;
}
