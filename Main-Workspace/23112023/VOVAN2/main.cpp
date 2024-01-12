#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sắp xếp mảng tài sản
    sort(a.begin(), a.end());

    // Tính chênh lệch giữa người giàu nhất và người nghèo nhất
    int initialDiff = a[n - 1] - a[0];

    // Tính số lần tối đa có thể thực hiện lượt lấy đi và chuyển đồ
    int maxRounds = min(initialDiff, k);

    // Kết quả là chênh lệch ban đầu trừ đi số lần đã thực hiện
    int result = initialDiff - maxRounds;

    cout << result << endl;

    return 0;
}
