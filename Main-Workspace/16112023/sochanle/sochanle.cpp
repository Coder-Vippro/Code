#include <bits/stdc++.h>
using namespace std;
long long n;
int demcs(int n)
{
    int digits = (n == 0) ? 1 : static_cast<int>(std::log10(std::abs(n))) + 1;
    return digits;
}

bool kt(long long n)
{
    int i = demcs(n);
    while (n > 0)
    {
        if (((n % 10) % 2 == 0 && i % 2 == 0) || ((n % 10) % 2 == 1 && i % 2 == 1))
        {
            i++;
            n = n / 10;
        }
        else
            return false;
    }
    return true;
}
int main()
{
    freopen("sochanle.inp", "r", stdin);
    freopen("sochanle.out", "w", stdout);
    cin >> n;
    if (kt(n) == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}