#include <iostream>

using namespace std;

int main() {

  int a, b, c;
  freopen("GAMES1.inp","r",stdin);
  freopen("GAMES1.out","w",stdout);
  cin >> a >> b >> c;
  if(a<=b&& b<=c) 
  cout<<max(abs(a-b),abs(b-c))-1;
  else if(b<=a && a<=c)
  cout<<max(abs(a-b),abs(a-c))-1;
  else if(a<=c && c<=b)
  cout<<max(abs(c-b),abs(a-c))-1;
  return 0;
}