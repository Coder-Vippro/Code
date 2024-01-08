#include <bits/stdc++.h>

using namespace std;

bool check_rectangle(int a, int b, int c, int x, int y) {
  if(a>0 && b>0 && c>0 && x>0 && y>0)
  if(a*b<= x*y)return true;
  return false;
}
long long a, b, c, x, y;
int main() {
 
  
  freopen("KHOIHCN.inp","r",stdin);
  freopen("KHOIHCN.out","w",stdout);
  cin >> a >> b >> c >> x >> y;

 
  if (check_rectangle(a, b, c, x, y)) {
    cout << "CO";
  } else {
    cout << "KHONG";
  }

  return 0;
}