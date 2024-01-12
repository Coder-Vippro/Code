#include <bits/stdc++.h>
using namespace std;
long long t, a, b;
int main()
{
   freopen("TCVB.inp","r",stdin);
   freopen("TCVB.out","w",stdout);
   cin >> t;
   while (t--) 
   {
      cin >> a >> b;
      if ((a + b) % 3 == 0 && a * 2 >= b && b * 2 >= a) 
      {
         cout << "YES"<<'\n';
      } 
      else 
      {
         cout << "NO"<<'\n';
      }
   }
   return 0;
}