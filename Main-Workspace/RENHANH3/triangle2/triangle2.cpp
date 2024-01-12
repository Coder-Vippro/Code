#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    freopen("triangle2.inp","r",stdin);
    freopen("triangle2.out","w",stdout);
  long long a, b, c;
  cin >> a >> b >> c;
  if ((a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)&&(a>0 && b>0 && c>0) )
  {
    cout << "YES";
  } else {
    cout << "NO";
  }

  
}
