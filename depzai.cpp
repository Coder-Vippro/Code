#include <iostream>
#include <vector>
using namespace std;

// Hàm trả về một vector chứa các tổng khối lượng cá có thể mua
vector<int> possibleSums(vector<int> a) {
  int n = a.size(); // Số lượng cá
  int maxSum = 0; // Tổng khối lượng lớn nhất
  for (int i = 0; i < n; i++) {
    maxSum += a[i];
  }
  vector<bool> dp(maxSum + 1, false); // Mảng đánh dấu các tổng có thể
  dp[0] = true; // Tổng bằng 0 luôn có thể
  for (int i = 0; i < n; i++) {
    for (int j = maxSum; j >= a[i]; j--) {
      // Nếu tổng j - a[i] có thể thì tổng j cũng có thể
      dp[j] = dp[j] || dp[j - a[i]];
    }
  }
  vector<int> result; // Vector kết quả
  for (int i = 1; i <= maxSum; i++) {
    if (dp[i]) {
      result.push_back(i); // Thêm tổng có thể vào kết quả
    }
  }
  return result;
}

// Hàm in ra vector
void printVector(vector<int> v) {
  cout << "[";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
    if (i < v.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;
}

// Hàm chính để kiểm tra
int main() {
  vector<int> a = {3, 2, 4}; // Khối lượng các con cá
  vector<int> sums = possibleSums(a); // Các tổng khối lượng có thể mua
  
  printVector(sums);
}