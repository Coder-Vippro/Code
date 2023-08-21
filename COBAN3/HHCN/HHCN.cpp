#include <bits/stdc++.h>
using namespace std;
long long n;
long long a, b, c;
int main() 
{
    //freopen("HHCN.inp","r",stdin);
    //freopen("HHCN.out","w",stdout);
    cin >> n;
    for (a = 1; a * a <= n; a++) 
    {
        if (n % a == 0) {
            b = n / a;
            c = n / b;
            break;
        }
    }
    long long kq = 4 * (a + b + c);
    cout << kq;
    return 0;
}