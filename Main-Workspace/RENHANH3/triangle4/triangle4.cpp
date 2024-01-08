#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    freopen("triangle4.inp","r",stdin);
    freopen("triangle4.out","w",stdout);
  long long a, b, c;
  cin >> a >> b >> c;
  if ((a==b && a==c)&&(a + b > c && b + c > a && a + c > b)) 
  {
    cout << "YES";
  } else {
    cout << "NO";
  }

  
}
