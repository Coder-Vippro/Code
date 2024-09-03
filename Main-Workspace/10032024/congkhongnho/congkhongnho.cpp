#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100001;
vector<string> numbers(MAX_N);
int n;

bool canAdd(const string& x, const string& y) {
    int carry = 0;
    int i = x.length() - 1;
    int j = y.length() - 1;

    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) sum += x[i] - '0';
        if (j >= 0) sum += y[j] - '0';
        
        if (sum > 9) return false;
        carry = sum / 10;
        i--; j--;
    }

    return carry == 0;
}

string add(const string& x, const string& y) {
    string result;
    int carry = 0;
    int i = x.length() - 1;
    int j = y.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += x[i] - '0';
        if (j >= 0) sum += y[j] - '0';
        
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
        i--; j--;
    }

    reverse(result.begin(), result.end());
    return result;
}

int findMaxChain() {
    int maxChain = 0;

    for (int i = 0; i < n; i++) {
        string current = numbers[i];
        int chainLength = 1;

        for (int j = 0; j < n; j++) {
            if (i != j && canAdd(current, numbers[j])) {
                current = add(current, numbers[j]);
                chainLength++;
            }
        }

        maxChain = max(maxChain, chainLength);
    }

    return maxChain;
}

int main() {
    cin >> n;
    numbers.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int result = findMaxChain();
    cout << result << endl;
    return 0;
}
