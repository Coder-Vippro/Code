#include <bits/stdc++.h>

using namespace std;
long long ans(string binaryString, int k) 
{
    long long prefix_sum = 0, result = 0;
    map<int, int> prefix_count;
    prefix_count[0] = 1;
    for (char bit : binaryString) {
        prefix_sum += (bit == '1' ? 1 : 0);
        int target = prefix_sum - k;
        if (prefix_count.find(target) != prefix_count.end()) 
        {
            result += prefix_count[target];
        }
        prefix_count[prefix_sum]++;
    }
    return result;
}
string binaryString;
int k;
int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI5.INP", "r", stdin);
    freopen("BAI5.OUT", "w", stdout);
    cin>>k;
    cin>>binaryString;
    cout << ans(binaryString, k);
    return 0;
}
