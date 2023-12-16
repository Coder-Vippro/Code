#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    int x = 1;
    while (x <= 10) {
      int sum = 0;
      while (x > 0) {
        sum += x % 10;
        x /= 10;
      }

      if (sum * x == a) {
        cout << x << endl;
        break;
      }

      x++;
    }

    if (x > 10) {
      cout << -1 << endl;
    }
  }

  return 0;
}
