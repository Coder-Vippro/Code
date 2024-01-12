#include <bits/stdc++.h>

using namespace std;

bool check_triangle(int a, int b, int c) {
  
  return (a + b + c == 180 && a <= 180 && b <= 180 && c <= 180);
}

string get_type_triangle(int a, int b, int c) {
  
  if (a == b && b == c) {
    return "DEU";
  } else if (a == 90 || b == 90 || c == 90) {
    return "VUONG";
  } else if (a == b || a == c || b == c) {
    return "CAN";
  } else {
    return "THUONG";
  }
}

int main() {
  
  int a, b, c;
  freopen("TAMGIAC.inp","r",stdin);
  freopen("TAMGIAC.out","w",stdout);
  cin >> a >> b >> c;

  
  if (!check_triangle(a, b, c)) {
    cout << "0";
    return 0;
  }

  
  cout << get_type_triangle(a, b, c);

  return 0;
}