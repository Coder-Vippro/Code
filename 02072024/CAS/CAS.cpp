#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a--;
    b--;
    c--;
    d--;
    vector<int> n(12), m(12);
    while (a != b) {
      n[a] = 1;
      m[a] = 0;
      if (++a == 12) a = 0;
    }
    while (b != a) {
      n[b] = 0;
      m[b] = 1;
      if (++b == 12) b = 0;
    }
    if ((n[c] && m[d]) || (n[d] && m[c]))
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
  return 0;
}