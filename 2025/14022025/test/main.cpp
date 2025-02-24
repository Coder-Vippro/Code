
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> minHeap;

    for (int i = 0; i < n; i++) {
        long long stones;
        cin >> stones;
        minHeap.push(stones);
    }

    long long totalCost = 0;

    while (minHeap.size() > 1) {
        long long first = minHeap.top(); 
        minHeap.pop();
        long long second = minHeap.top();
        minHeap.pop();

        long long mergeCost = first + second;
        totalCost += mergeCost;

        minHeap.push(mergeCost);
    }

    cout << totalCost << endl;
    return 0;
}