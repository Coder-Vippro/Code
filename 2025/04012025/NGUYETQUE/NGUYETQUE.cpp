#include <bits/stdc++.h>
using namespace std;
static const int MAXN = 20;
// Mảng đánh dấu số nào là nguyên tố (đến 2*n)
bool isPrime[2*MAXN+1];
int n, a;              // n: số phần tử, a: yêu cầu in
vector<int> X(MAXN);   // X[i] là con số ở vị trí i của vòng
bool used[MAXN+1];     // used[k] = true nếu k đã được chọn
int totalWays = 0;     // Đếm số cách
vector<vector<int>> allSolutions; // Lưu các nghiệm nếu cần in

// Kiểm tra nguyên tố cơ bản
bool checkPrime(int x) {
    if(x < 2) return false;
    if(x < 4) return true; // 2 và 3 là nguyên tố
    if(x % 2 == 0) return false;
    for(int i = 3; i*i <= x; i += 2) 
        if(x % i == 0) return false;
    return true;
}

// Chuẩn bị mảng isPrime cho mọi tổng có thể (<= 2*n)
void buildPrimeTable() {
    for(int i = 0; i <= 2*n; i++) {
        isPrime[i] = checkPrime(i);
    }
}

// Hàm backtracking
void backtrack(int idx) {
    // Nếu đã đặt đủ n phần tử (idx == n)
    if(idx == n) {
        // Kiểm tra cặp cuối + đầu
        if(isPrime[ X[n-1] + X[0] ]) {
            // Nghiệm hợp lệ, tăng biến đếm
            totalWays++;
            // Nếu a=2, lưu lại dãy để in
            if(a == 2) {
                vector<int> solution;
                for(int i=0; i<n; i++) solution.push_back(X[i]);
                allSolutions.push_back(solution);
            }
        }
        return;
    }
    
    // Nếu chưa điền đủ
    // idx=0 thì ta đã đặt X[0] = 1 ở ngoài main rồi
    // nên thực tế chỉ backtrack khi idx>0
    if(idx == 0) {
        // Vị trí 0 ta không cần thử gì thêm vì luôn đặt = 1
        backtrack(idx+1);
        return;
    }
    // Thử các số 2..n
    for(int k=2; k<=n; k++) {
        if(!used[k] && isPrime[X[idx-1] + k]) {
            X[idx] = k;
            used[k] = true;
            backtrack(idx+1);
            used[k] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("NGUYETQUE.inp", "r", stdin);
    freopen("NGUYETQUE.out", "w", stdout);
    cin >> n >> a;  // Đọc n và a

    // Xây dựng bảng prime
    buildPrimeTable();

    // Đặt X[0] = 1 và đánh dấu đã dùng 1
    X[0] = 1;
    memset(used, false, sizeof(used));
    used[1] = true;

    // Gọi backtrack
    backtrack(0);

    // In Kết Quả
    if(a == 1) {
        cout << totalWays << "\n";
    } else {
        // a == 2
        cout << totalWays << "\n";
        // Sắp xếp các nghiệm theo yêu cầu
        // Ở đây, ta sắp xếp dãy (theo thứ tự từ vị trí 0..n-1)
        // để có thứ tự tăng dần, ta dùng tiêu chí so sánh "từ trái qua phải"
        sort(allSolutions.begin(), allSolutions.end());
        // In từng cách
        for(auto &sol : allSolutions) {
            for(int i=0; i<n; i++) {
                cout << sol[i];
                if(i < n-1) cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}