#include <bits/stdc++.h>
using namespace std;
int n;
string s[100001];
pair <int, int> p[100001];
int scs(string s)
{
  int dem = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= '0' && s[i] <= '9')
      dem++;
  }
  return dem;
}
int main()
{
  freopen("TROCHOI.inp", "r", stdin);
  freopen("TROCHOI.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> s[i];
    p[i].first = scs(s[i]);
    p[i].second = i;
  }
  sort(p + 1, p + n + 1);
  for (int i = 1; i <= n; i++)
  {
    cout << s[p[i].second] << '\n';
  }
  return 0;
}
