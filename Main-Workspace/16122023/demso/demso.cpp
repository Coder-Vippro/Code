#include <bits/stdc++.h>
using namespace std;
long long A, B, C;
int main()
{
    freopen("demso.inp", "r", stdin);
    freopen("demso.out", "w", stdout);
    cin >> A >> B >> C;
    long long count = B - A + 1;
    count -= (B / C) - (A + C - 1) / C + 1;
    cout << count;
    return 0;
}
