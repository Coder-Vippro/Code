#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> a) {
  int max_life = 0, cur_life = 0;
  for (int a_i : a) {
    if (cur_life >= 0) {
      max_life = max(max_life, cur_life);
    } else {
      cur_life = 0;
    }
    cur_life += a_i;
  }

  return max_life;
}
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int max_life = solve(a);
  cout << max_life << endl;

  return 0;
}