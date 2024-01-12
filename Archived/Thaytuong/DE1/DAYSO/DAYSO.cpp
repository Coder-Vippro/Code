#include <iostream>
#include <string>
using namespace std;
string kq(int n) 
{
    if (n == 1) return "1";
    if (n == 2) return "11";
    string s = "11";
    for (int i = 3; i <= n; i++) 
    {
        string tmp = "";
        for (int j = 0; j < s.size(); j++) 
        {
            int dem = 1;
            while (j + 1 < s.size() && s[j] == s[j + 1]) 
            {
                dem++;
                j++;
            }
<<<<<<< HEAD
            tmp = tmp + char(dem+48) + s[j];
=======
            tmp = tmp + char(dem) + s[j];
>>>>>>> 0af40c6edf7b4e953de1cf72e2469456941b25d2
        }
        s = tmp;
    }
    return s;
}
int main() 
{
    //freopen("DAYSO.INP","r",stdin);
    //freopen("DAYSO.OUT","w",stdout);
    int n;
    cin >> n;
    cout << kq(n);
    return 0;
}