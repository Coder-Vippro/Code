#include <bits/stdc++.h>

using namespace std;
long long h;
long long tmp;
int main() 
{
    freopen("LEODOC.inp","r",stdin);
    freopen("LEODOC.out","w",stdout);
    long long n;
    cin >> n;
    long long maxx = 0;
    long long tmp2 = 0;
    cin >> tmp;
    for (long long i = 2; i <= n; i++) 
    { 
        cin >> h;
        if (h > tmp)
        { 
            tmp2 += (h - tmp); 
            maxx = max(maxx, tmp2); 
        } 
        else 
        { 
            tmp2 = 0;
        }
        tmp = h;
    }
    cout << maxx << endl;
    return 0;
}