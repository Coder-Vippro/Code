#include <bits/stdc++.h>

using namespace std;
int a2;
int main() 
{
    freopen("HOTEL.inp","r",stdin);
    freopen("HOTEL.out","w",stdout);
    int n;
    cin >> n;
    int a3 = n / 3; 
    if((n - a3 * 3) / 2 == 0 && (n - a3 * 3) == 1) a2 = 1;
    else a2 = (n - a3 * 3) / 2; 
    if ((n - a3 * 3) % 2 == 1 && a3 > 0) 
    {
        a3--;
        a2++;
    }
    cout << a2 << " " << a3;
    return 0;
}