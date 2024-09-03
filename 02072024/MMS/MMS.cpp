#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int maxSum = 0, optimalX = 2;
        for (int x = 2; x <= n; x++) {
            int sum = (n / x) * x * (n / x + 1) / 2;
            if (sum > maxSum) {
                maxSum = sum;
                optimalX = x;
            }
        }

        cout << optimalX << endl;
    }

    return 0;
}