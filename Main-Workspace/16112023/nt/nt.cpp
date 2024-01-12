#include <bits/stdc++.h>
using namespace std;
unsigned long long a, b;
bool isPrime(long long n)
{
    if (n <= 1)
    {
        return false;
    }
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int n;
int main()
{
    freopen("nt.inp", "r", stdin);
    freopen("nt.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        long long k = b * b - a * a;
        if (isPrime(k) == true)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}