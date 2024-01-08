#include <bits/stdc++.h>

using namespace std;
long long a, b, c;
int main() {
  freopen("triangle5.inp", "r", stdin);
  freopen("triangle5.out", "w", stdout);
  cin >> a >> b >> c;

  if (a + b > c && b + c > a && a + c > b) {
    if (a == b && b == c) {
      cout << "deu";
    } else if (a == b || b == c || a == c) {
      cout << "can";
    } else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
      cout << "vuong";
    } else {
      cout << "thuong";
    }
  } else {
    cout << "khong";
  }

  return 0;
}