#include <iostream>
#include <string>
using namespace std;
bool ans(string s, int r, int l) 
{
    while (r < l) 
    {
        if (s[r] != s[l]) 
        {
            return false;
        }
        r++;
        l--;
    }
    return true;
}
string s;
int kq = 0;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("subpal.inp", "r", stdin);
    freopen("subpal.out", "w", stdout);
    cin >> s;
    for (int i = 0; i < s.size(); i++) 
    {
        for (int j = i; j < s.size(); j++) 
        {
            if (ans(s, i, j)==true) 
            {
              kq++;
            }
        }
    }
    cout << kq;
    return 0;
}