#include <bits/stdc++.h>
using namespace std;
int n;
long long a[1000001];
bool ktcp(long long k)
{
    long long h = sqrt(k);
    if (h * h == k)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("SOCP.inp", "r", stdin);
    freopen("SOCP.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = a[i] + 1; j < a[i + 1]; j++)
        {
            if (ktcp(j) == true)
            {
                cout << j;
                return 0;
            }
        }
    }
}