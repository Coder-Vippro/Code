#include <bits/stdc++.h>
using namespace std;
long long n, k;
pair<long long, long long> p[100001];
long long dem = 0;
long long tmp;
int main()
{
    freopen("MUAHOA.inp", "r", stdin);
    freopen("MUAHOA.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p + 1, p + n + 1);
    for (long long i = 1; i <= n; i++)
    {
        if (k - p[i].first * p[i].second >= 0)
        {
            k -= p[i].first * p[i].second;
            dem += p[i].second;
        }
        else
        {
            tmp = k / p[i].first;
            if (tmp <= p[i].second && tmp * p[i].first <= k)
            {
                k -= tmp * p[i].first;
                dem += tmp;
            }
        }
    }
    cout << dem;
    return 0;
}