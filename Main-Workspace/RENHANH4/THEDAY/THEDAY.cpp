#include <bits/stdc++.h>

using namespace std;
int d, t, n;
int main() {
  freopen("THEDAY.inp", "r", stdin);
  freopen("THEDAY.out","w", stdout);
  
  d++;
  if (t == 2) {
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
      if (d > 29) {
        d = 1;
        t++;
      }
    } else {
      if (d > 28) {
        d = 1;
        t++;
      }
    }
  } else if (d > 31) {
    d = 1;
    t++;
    if (t > 12) {
      t = 1;
      n++;
    }
  }

 
  cout << d << " " << t << " " << n << endl;

  return 0;
}