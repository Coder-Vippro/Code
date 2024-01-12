#include <bits/stdc++.h>

using namespace std;

int main() {
    
    freopen("ASHOES.inp", "r", stdin);
    freopen("ASHOES.out", "w", stdout);
  int n, m;
  cin >> n >> m;

  int min_color = min(n, m);
  int max_color = abs(n-m)/2;

  cout << min_color << " " << max_color << endl;

  return 0;
}