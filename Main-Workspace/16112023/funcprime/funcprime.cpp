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
long long tong = 0;
int main()
{
    freopen("funcprime.inp", "r", stdin);
    freopen("funcprime.out", "w", stdout);
    cin >> n;
    sangnt(n);
    for (int i = 2; i <= n; i++)
    {
        if (p[i] == 1)
            tong += i;
    }
    if (isPrime(tong) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}