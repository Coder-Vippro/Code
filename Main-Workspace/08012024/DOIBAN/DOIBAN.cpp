#include <bits/stdc++.h>
using namespace std;
int n, m, k;
vector<int> a;
vector<int> b;
int tmp;
int tmp2;
int binarySearch(int x)
{
    int l = 0;
    int r = b.size() - 1;
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
int x;
bool h = false;
int tmp3;
int main()
{
    freopen("DOIBAN.inp", "r", stdin);
    freopen("DOIBAN.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {

        tmp = a[i] + k;
        tmp2 = binarySearch(tmp);
        while (tmp2 == -1)
        {
            tmp++;
            tmp2 = binarySearch(tmp);
            if (tmp > b[b.size() - 1])
            {
                break;
            }
        }
        if (tmp2 != -1)
        {
            cout << a[i] << ' ' << b[tmp2] << '\n';
            h = true;
        }
        if (h == true)
        {
            h = false;
            b.erase(b.begin() + tmp2);
        }
        tmp2 = 0;
        tmp = 0;
    }
    return 0;
}