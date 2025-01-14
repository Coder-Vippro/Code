#include <bits/stdc++.h>
using namespace std;

// Vector 2D res lưu lại tất cả các đường đi hợp lệ
vector< vector< pair<int, int> > > res;

// n, m: kích thước ma trận (số hàng, số cột) | query: số truy vấn (không sử dụng trong lời giải hiện tại)
int n, m, query;

// Ma trận `a` biểu diễn trạng thái của từng ô; 0 là không bị chặn, 1 là bị chặn
vector< vector<int> > a;

/*
Hàm Back_Track:
- `x`, `y`: vị trí hiện tại trong ma trận
- `path`: danh sách các ô đã đi qua để đi đến (x, y)
*/
void Back_Track(int x, int y, vector< pair<int, int> > path) {
    // Điều kiện dừng:
    // - Nếu ra ngoài biên (x hoặc y vượt quá ma trận)
    // - Hoặc ô hiện tại `a[x][y]` là 1 (chặn, không thể đi vào ô này)
    if (x > n || y > m || a[x][y]) 
        return;

    // Nếu đã đến đích (ô [n, m]), lưu lại đường đi (path) vào kết quả `res`
    if (x == n && y == m) {
        res.push_back(path);
        return;
    }

    // Tạo hai bản sao của đường đi hiện tại (path):
    vector< pair<int, int> > p1 = path;  // Đường đi mới khi đi sang phải
    vector< pair<int, int> > p2 = path;  // Đường đi mới khi đi xuống dưới

    // Tiếp tục đi sang phải ([x, y+1]):
    p1.push_back({x, y + 1});  // Thêm ô mới vào đường đi
    Back_Track(x, y + 1, p1); // Đệ quy để tiếp tục khám phá

    // Tiếp tục đi xuống dưới ([x+1, y]):
    p2.push_back({x + 1, y});  // Thêm ô mới vào đường đi
    Back_Track(x + 1, y, p2);  // Đệ quy để tiếp tục khám phá
}

int main() {
    // Nhập kích thước ma trận và số truy vấn (chưa dùng `query`)
    cin >> n >> m >> query;

    // Khởi tạo ma trận `a` (giá trị mặc định là 0)
    a.resize(n + 5, vector<int>(m + 5, 0));

    // Nhập giá trị các ô trong ma trận
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++) 
            cin >> a[i][j];

    // Bắt đầu tìm đường từ ô [1, 1], khởi tạo đường đi ban đầu là {{1, 1}}
    Back_Track(1, 1, {{1, 1}});

    // Xuất tất cả các đường đi hợp lệ tìm được
    for (auto x : res) {           // Với mỗi đường đi trong res
        for (auto y : x)          // Với mỗi ô (x, y) trong đường đi
            cout << y.first << y.second << ' ';  // Xuất tọa độ của ô
        cout << '\n';
    }
    return 0;
}

/*

### Tổng quát thuật toán:

**Bài toán:**
Chương trình giải quyết bài toán tìm **tất cả các đường đi hợp lệ** từ ô \( (1,1) \) đến ô \( (n,m) \) trong một ma trận \( n \times m \) với các quy tắc sau:
1. Chỉ được phép di chuyển sang phải hoặc xuống dưới.
2. Các ô có giá trị bằng 1 bị chặn, không thể đi vào.

**Ý tưởng thuật toán:**
Sử dụng thuật toán **Backtracking (quay lui)** để thử tất cả các khả năng di chuyển trong ma trận. Từ một ô hiện tại \( (x, y) \), chương trình:
1. Thử di chuyển sang phải \( (x, y+1) \).
2. Thử di chuyển xuống dưới \( (x+1, y) \).
3. Lưu lại đường đi nếu đến được đích \( (n, m) \).

**Các bước chi tiết:**
1. **Khởi tạo:**
   - Ma trận đầu vào được nhập từ người dùng, các ô có giá trị là 1 bị chặn.
   - Bắt đầu tại \( (1, 1) \), tạo một danh sách `path` để lưu lại các tọa độ ô đã đi qua.

2. **Backtracking:**
   - Mỗi bước sẽ kiểm tra hai khả năng: di chuyển **sang phải** hoặc **xuống dưới**. 
   - Nếu ra ngoài biên hoặc chạm vào ô bị chặn, dừng việc khám phá đường đi tại đây.

3. **Điều kiện dừng:**
   - Nếu đi ra ngoài biên ma trận hoặc gặp ô bị chặn, không tiếp tục đệ quy.
   - Nếu đến được ô đích \( (n, m) \), đường đi hợp lệ (`path`) được lưu vào danh sách kết quả `res`.

4. **Xuất kết quả:**
   - Xuất tất cả các đường đi hợp lệ.
   - Mỗi đường đi được biểu diễn bằng một danh sách các tọa độ của các ô.

**Độ phức tạp:**
1. Thời gian:
   - Trường hợp xấu nhất (không có ô bị chặn), số đường đi là \( C(n+m-2, m-1) \) (hay số tổ hợp \( \binom{n+m-2}{m-1} \)).
   - Khi có các ô bị chặn, số đường đi sẽ giảm.
2. Không gian:
   - Lưu trữ đường đi `path` và kết quả `res`.

**Ví dụ minh họa:**
Input:
```
3 3 0
0 0 0
0 1 0
0 0 0
```
Output:
```
11 21 23 33
11 21 33
12 12 33
```

- Từ \( (1,1) \), có 3 đường đi hợp lệ đến được \( (3,3) \):
  - \( 11 21 23 33 \): đi sang phải, xuống, phải, xuống.
  - \( 11 21 33 \): đi sang phải, phải, xuống, xuống.
  - \( 12 12 33 \): đi xuống, phải, xuống, phải.

**Ứng dụng:**
Chương trình trên có thể ứng dụng để tìm đường đi trong mê cung hoặc các bài toán tương tự như "đếm số cách đi từ A đến B" trong lập trình.
*/