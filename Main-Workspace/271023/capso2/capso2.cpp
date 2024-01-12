#include <bits/stdc++.h>
using namespace std;
int n, x;
int main() 
{
  
  freopen("capso2.inp", "r", stdin);
  freopen("capso2.out", "w", stdout);
  cin >> n >> x;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) 
    {
      if (a[i] + a[j] == x) {
        count++;
      }
    }
  }

  
  cout << count << endl;

  return 0;
}   
