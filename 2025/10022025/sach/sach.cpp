#include <bits/stdc++.h>
using namespace std;
unsigned long long combination(int n, int r) 
{
    if(r > n - r)r = n - r;
    unsigned long long res = 1;
    for (int i = 0; i < r; i++) 
    {
        res = res * (n - i) / (i + 1);
    }
    return res;
}
int n;
int main()
{
    freopen("sach.inp", "r", stdin);
    freopen("sach.out", "w", stdout);
    cin>>n;
    cout<<combination(n, 5)+combination(n, 6)+combination(n, 7);
}