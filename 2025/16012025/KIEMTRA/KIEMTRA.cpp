#include <bits/stdc++.h>

using namespace std;
long long q, x, y, z;
long long a[4];
int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("KIEMTRA.INP", "r", stdin);
    freopen("KIEMTRA.OUT", "w", stdout);   
    cin >> q >> x >> y >> z;
    if (q > 3) 
    {
        cout << 0;
        return 0;
    }
    long long trungxy = min(x, y);
    long long trungxz = min(x, z);
    long long trungyz= min(y, z);
    long long trungxyz = min(min(x, y), z);
    long long kq = 0;
    if (q == 1) 
    {
        kq = x + y + z;
    } 
    else if (q == 2) 
    {
        long long tongxy = x * y - trungxy;
        long long tongxz = x * z - trungxz;
        long long tongyz = y * z - trungyz;
        kq = tongxy + tongxz + tongyz;
    } 
    else if (q == 3) 
    {
        
        a[1]=x;
        a[2]=y;
        a[3]=z;
        sort(a+1,a+4);
        kq=a[1]*(a[2]-1)*(a[3]-2);
    }
    cout << kq << '\n';
    return 0;
}