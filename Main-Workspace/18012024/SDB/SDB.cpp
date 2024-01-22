#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000001];
int b[1000001];
int binarySearch(int n, int x)
{
    int l = 1;
    int r = n;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (b[mid] == x)
            return mid;

        if (b[mid] < x)
            l = mid + 1;

        else
            r = mid - 1;
    }
    return -1;
}
vector<int> p;
int dem = 0, h;
int main()
{
    freopen("SDB.inp", "r", stdin);
    freopen("SDB.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++)
    {
        h = binarySearch(n, a[i]);
        if (h != -1)
        {
            if (b[h] != b[h + 1] && b[h] != b[h - 1])
            {
                p.push_back(b[h]);
            }
        }
    }
    cout << p.size() << '\n';
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << '\n';
    }
}