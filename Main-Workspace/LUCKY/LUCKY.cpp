#include <bits/stdc++.h>
using namespace std;
int n;
int a[10001];
int x,k;
int binary_search(int a[], int low, int high, int x) 
{
  if (low > high) {
    return -1;
  }
  int mid = (low + high) / 2;
  if (a[mid] == x) {
    return mid;
  }
  else if (a[mid] > x) {
    return binary_search(a, low, mid - 1, x);
  }
  else {
    return binary_search(a, mid + 1, high, x);
  }
}
int count_occurrences(int a[], int index, int x) 
{
  int count = 0;
  for (int i = index; i < n; i++) {
    if (a[i] == x) {
      count++;
    }
  }
  return count;
}
int count_x_in_array(int a[], int n, int x) 
{
  int index = binary_search(a, 0, n - 1, x);
  if (index == -1) {
    return 0;
  }
  return count_occurrences(a, index, x);
}
int main()
{
    freopen("LUCKY.inp","r",stdin);
    freopen("LUCKY.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        cin>>k;
        cout<<count_x_in_array(a,n,k)<<'\n';
    }
}