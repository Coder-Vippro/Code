#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int &i : a) cin >> i;
 
    map<long long, int> prefix_count; 
    prefix_count[0] = 1; 
    long long prefix_sum = 0;
    long long count = 0;
 
    for (int i = 0; i < n; i++) {
        prefix_sum += a[i];
        count += prefix_count[prefix_sum - x];
        prefix_count[prefix_sum]++; 
    }
 
    cout << count;
    return 0;
}
