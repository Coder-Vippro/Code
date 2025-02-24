#include <bits/stdc++.h>
using namespace std;
const int LIMIT = 1e9;
vector<int> hamming_numbers;
unordered_map<int, int> hamming_index;
void generate_hamming() 
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    //priority_queue<long long, vector<long long>, greater<long long>> pq;
    unordered_set<long long> seen;
    pq.push(1);
    seen.insert(1);
    vector<int> factors = {2, 3, 5};
    while (!pq.empty()) 
    {
        long long num = pq.top();
        pq.pop();
        hamming_index[num] = hamming_numbers.size() + 1;
        hamming_numbers.push_back(num);
        if (num > LIMIT) break;
        for (int factor : factors) 
        {
            long long next_num = num * factor;
            if (next_num <= LIMIT && seen.find(next_num) == seen.end()) {
                pq.push(next_num);
                seen.insert(next_num);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);
    generate_hamming();
    int t;
    cin >> t;
    while (t--) 
    {
        int x;
        cin >> x;
        if (hamming_index.count(x)) 
        {
            cout << hamming_index[x] << '\n';
        } 
        else 
        {
            cout << "-1\n";
        }
    }
    return 0;
}
