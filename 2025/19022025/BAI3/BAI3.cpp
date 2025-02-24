#include <bits/stdc++.h>
using namespace std;
int n;
int a[100001], b[5];
int main() 
{
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        b[a[i]]++;
    }
    int tong = b[4];
    int min31 = min(b[1], b[3]);
    tong += min31;
    b[1] -= min31;
    b[3] -= min31;
    tong += b[3];
    tong += b[2] / 2;
    b[2] %= 2;
    if (b[2] > 0) 
    {
        tong += 1;  
        b[1] = max(0, b[1] - 2);
    }
    tong += (b[1] + 3) / 4;
    cout << tong;
}
