#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, k;
int main() {

  freopen("THICONG.inp","r",stdin);
  freopen("THICONG.out","w",stdout);
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<long long> dp(n + 1, 0);
  for (int i = 1; i <= k; i++) {
    long long best = -1e18;
    for (int j = 0; j < n; j++) {
      if (i - 1 <= j) {
        best = max(best, dp[i - 1 - j] + a[j]);
      }
    }
    dp[i] = best;
  }

  cout << dp[k] << endl;
  return 0;
}