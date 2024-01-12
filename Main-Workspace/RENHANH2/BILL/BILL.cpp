#include <bits/stdc++.h>

using namespace std;
int number_of_units;
int main() 
{
  
  freopen("BILL.inp", "r", stdin);
  freopen("BILL.out", "w", stdout);
  cin >> number_of_units;
  
  int total_cost = 0;
  for (int i = 1; i <= number_of_units; i++) {
    if (i <= 100) {
      total_cost += 2000;
    } else if (i <= 200) {
      total_cost += 3000;
    } else if (i <= 300) {
      total_cost += 5000;
    } else {
      total_cost += 10000;
    }
  }
  cout << total_cost;
  return 0;
}