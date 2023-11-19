#include <bits/stdc++.h>
using namespace std;
long long tu1, tu2, mau1, mau2;
long long GCD(long long a, long long b)
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
    freopen("hieups.inp", "r", stdin);
    freopen("hieups.out", "w", stdout);
    cin >> tu1 >> mau1 >> tu2 >> mau2;
    long long tmp = mau1;
    tu1 *= mau2;
    mau1 *= mau2;
    tu2 *= tmp;
    mau2 *= tmp;
    long long tu3 = tu1 - tu2;
    if (tu3 == 0)
        return 0;
    else if (tu3 > 0)
        cout << tu3 / GCD(tu3, mau1) << '/' << mau1 / GCD(tu3, mau2);
    else if (tu3 < 0)
    {
        tu3 = abs(tu3);
        cout << '-' << tu3 / GCD(tu3, mau1) << '/' << mau1 / GCD(tu3, mau2);
    }
    return 0;
}