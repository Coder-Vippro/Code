#include <bits/stdc++.h>
using namespace std;
int n, k, b;
int a[1000001];
int x;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k >> b;
    for (int i = 0; i < n; i++)
        a[i] = 0;
    for (int i = 0; i < b; ++i)
    {
        cin >> x;
        a[x] = 1;
    }
    int dem = 0;
    for (int i = 1; i <= k; ++i)
    {
        if (a[i] == 1)
            dem++;
    }
    int minn = dem;
    for (int i = k + 1; i <= n; ++i)
    {
        if (a[i] == 1)
            dem++;
        if (a[i - k] == 1)
            dem--;
        minn = min(minn, dem);
    }
    cout << minn;
    return 0;
}