#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int sum_a = 0;
    int sum_b = 0;
    for (int i = 0; i < n; i++) {
        sum_a += a[i];
        sum_b += b[i];
    }
    int diff = abs(sum_a - sum_b);
    vector<int> flips;
    for (int i = 0; i < n; i++) {
        int new_diff = abs(sum_a - a[i] + b[i] - (sum_b - b[i] + a[i]));
        if (new_diff < diff) {
            flips.clear();
            flips.push_back(i + 1);
            diff = new_diff;
        }
        else if (new_diff == diff) {
            flips.push_back(i + 1);
        }
    }
    cout << flips.size() << endl;
    sort(flips.begin(), flips.end(), greater<int>());
    for (int i = 0; i < flips.size(); i++) {
        cout << flips[i] << " ";
    }
    cout << endl;
    cout << diff << endl;
    return 0;
}
