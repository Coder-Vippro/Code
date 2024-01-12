#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    freopen("triangle1.inp","r",stdin);
    freopen("triangle1.out","w",stdout);
  long long a, b, c;
  cin >> a >> b >> c;
  if (a + b > c && b + c > a && a + c > b) 
  {
    cout << "YES";
  } else {
    cout << "NO";
  }

  
}
