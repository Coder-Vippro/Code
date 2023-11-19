#include <bits/stdc++.h>
using namespace std;
int demuoc(long long n)
{
    int dem = 0;

    for (long long i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            dem += (i * i == n) ? 1 : 2;
        }
    }

    return dem;
}
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
long long n;
int main()
{
    freopen("ngto1.inp", "r", stdin);
    freopen("ngto1.out", "w", stdout);
    cin >> n;
    if (isPrime(demuoc(n)) == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}