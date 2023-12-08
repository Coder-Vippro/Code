#include <bits/stdc++.h>
using namespace std;
bool kt(int i)
{
    int scs = int(log10(i)) + 1;
    int k = i;
    int dem = 0;
    while (i > 0)
    {
        dem += pow(i % 10, scs);
        i /= 10;
    }
    if (dem == k)
        return true;
    return false;
}
int n;
int dem = 0;
int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (kt(i) == true)
        {
            cout<<i<<'\n';
            dem++;
        }
    }
    cout << dem;
    
}