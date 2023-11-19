#include <bits/stdc++.h>
using namespace std;
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
long long n1;
int main()
{
    freopen("ngto2.inp", "r", stdin);
    freopen("ngto2.out", "w", stdout);
    cin >> n1;
    long long n = 0;
    while (n1 > 0)
    {
        n = n + n1 % 10;
        n1 = n1 / 10;
    }
    if (isPrime(n) == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}