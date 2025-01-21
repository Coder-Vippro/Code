#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e7 + 5;
// Định nghĩa số nguyên N là giới hạn tối đa của độ dài chuỗi
const ll mod = 1e9 + 7; // Số nguyên tố lớn dùng cho mod phép tính băm
const ll base = 257; // Cơ số cho hàm băm (có thể chọn số nguyên lớn hơn số ký tự trong bảng chữ cái)
string s; // Chuỗi đầu vào
ll hash_val[N], power[N]; // Mảng lưu giá trị băm và lũy thừa của base
int n; // Độ dài chuỗi
// Hàm tính lũy thừa nhanh a^n mod mod
ll quickpow(ll a, ll n)
{
    ll result = 1;
    while (n > 0)
    {
        if (n % 2 == 1) result = (result * a) % mod;
        a = (a * a) % mod;
        n /= 2;
    }
    return result % mod;
}

// Hàm kiểm tra xem có tồn tại hai đoạn con độ dài len trùng nhau hay không
// Nếu tất cả các đoạn con độ dài len đều khác nhau thì trả về true
bool ans(int len)
{
    set<ll> hashes; // Tập hợp lưu các giá trị băm của các đoạn con
    for (int i = 1; i + len - 1 <= n; i++)
    {
        int l = i, r = i + len - 1; // Chỉ số bắt đầu và kết thúc của đoạn con
        // Tính giá trị băm của đoạn con [l, r]
        ll curr_hash = (hash_val[r] - (hash_val[l - 1] * power[len]) % mod + mod) % mod;
        // Kiểm tra xem giá trị băm này đã xuất hiện trước đó hay chưa
        if (hashes.count(curr_hash)) return false; // Nếu có thì tồn tại hai đoạn con trùng nhau, trả về false
        hashes.insert(curr_hash); // Nếu chưa thì thêm vào tập hợp
    }
    return true; // Nếu duyệt hết mà không có đoạn con trùng nhau nào, trả về true
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("XEPHANG.INP", "r", stdin);
    freopen("XEPHANG.OUT", "w", stdout);
    cin >> n >> s; // Đọc độ dài chuỗi và chuỗi đầu vào
    s = " " + s; // Thêm ký tự trống ở đầu để chỉ số bắt đầu từ 1
    power[0] = 1; // Khởi tạo power[0] = 1
    for (int i = 1; i <= n; i++)
    {
        power[i] = quickpow(base, i); // Tính trước các lũy thừa của base
    }
    for (int i = 1; i <= n; i++)
    {
        // Tính giá trị băm tiền tố hash_val[i] = hash_val[i-1]*base + s[i]
        hash_val[i] = (hash_val[i - 1] * base + s[i]) % mod;
    }
    int l = 1, r = n, kq = 0;
    // Thực hiện tìm kiếm nhị phân độ dài len nhỏ nhất mà tất cả các đoạn con độ dài len đều khác nhau
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ans(mid))
        {
            kq = mid; // Cập nhật kết quả
            r = mid - 1; // Tiếp tục tìm kiếm bên trái để tìm độ dài nhỏ hơn
        }
        else l = mid + 1; // Nếu không thỏa mãn thì tìm bên phải
    }
    cout << kq; // In ra kết quả
    return 0;
}
/*
**Giải thích thuật toán chi tiết:**

**Mục tiêu của bài toán:**

Tìm độ dài nhỏ nhất `len` sao cho trong chuỗi `s` độ dài `n` cho trước không tồn tại hai đoạn con nào độ dài `len` bằng nhau (tức là tất cả các đoạn con độ dài `len` là khác nhau).

**Ý tưởng chính:**

Sử dụng thuật toán tìm kiếm nhị phân để tìm độ dài `len` nhỏ nhất thỏa mãn điều kiện. 

- Với mỗi giá trị `len`, ta cần kiểm tra xem tất cả các đoạn con độ dài `len` có khác nhau hay không.
- Để kiểm tra nhanh các đoạn con có giống nhau hay không, ta sử dụng kỹ thuật Hashing (băm) để so sánh các đoạn con.

**Chi tiết thuật toán:**

1. **Tiền xử lý:**

   - Tính trước các lũy thừa của `base` modulo `mod` và lưu vào mảng `power[]`, cụ thể `power[i] = base^i mod mod`. Việc này giúp tính nhanh giá trị băm của các đoạn con.
   - Tính giá trị băm tiền tố `hash_val[]` của chuỗi `s`, cụ thể `hash_val[i] = (hash_val[i-1] * base + s[i]) mod mod`. Việc này cho phép tính giá trị băm của bất kỳ đoạn con nào trong `O(1)` thời gian.

2. **Hàm `ans(len)`:**

   - Duyệt qua tất cả các đoạn con độ dài `len` của chuỗi `s`. Với mỗi đoạn con từ vị trí `l` đến `r = l + len - 1`, ta tính giá trị băm của đoạn con đó.
   - Để tính giá trị băm của đoạn con `[l, r]`, ta sử dụng công thức:
     ```
     curr_hash = (hash_val[r] - hash_val[l - 1] * power[len] % mod + mod) % mod;
     ```
     (Cộng thêm `mod` và sau đó modulo `mod` để đảm bảo giá trị không âm)
   - Sử dụng một tập hợp (`set`) `hashes` để lưu trữ các giá trị băm của các đoạn con đã gặp. Nếu trong quá trình duyệt, gặp một giá trị băm đã tồn tại trong `hashes`, nghĩa là có ít nhất hai đoạn con trùng nhau, hàm trả về `false`. Nếu không, sau khi duyệt hết, hàm trả về `true`.

3. **Tìm kiếm nhị phân:**

   - Khởi tạo `l = 1`, `r = n`, `kq = 0`.
   - Trong khi `l <= r`:
     - Tính `mid = (l + r) / 2`.
     - Nếu `ans(mid)` trả về `true`, nghĩa là tất cả các đoạn con độ dài `mid` đều khác nhau:
       - Cập nhật `kq = mid` (lưu độ dài hiện tại).
       - Tiếp tục tìm kiếm ở khoảng nhỏ hơn bằng cách gán `r = mid - 1`.
     - Ngược lại, nếu có đoạn con trùng nhau:
       - Tiếp tục tìm kiếm ở khoảng lớn hơn bằng cách gán `l = mid + 1`.
   - Sau khi kết thúc vòng lặp, `kq` là kết quả cần tìm.

**Ví dụ minh họa:**

Giả sử chuỗi `s = "ababa"`, độ dài `n = 5`.

Ta sẽ tìm độ dài nhỏ nhất `len` sao cho tất cả các đoạn con độ dài `len` đều khác nhau.

**Bước 1: Tiền xử lý**

- Tính các lũy thừa của `base` modulo `mod` và giá trị băm tiền tố `hash_val[]`.

**Bước 2: Tìm kiếm nhị phân**

- **Lần 1:** `l = 1`, `r = 5`, `mid = 3`
  - Kiểm tra với `len = 3`:
    - Các đoạn con độ dài 3:
      - `aba` (từ vị trí 1)
      - `bab` (từ vị trí 2)
      - `aba` (từ vị trí 3)
    - Giá trị băm:
      - `hash1` cho `aba`
      - `hash2` cho `bab`
      - `hash1` cho `aba` (trùng với `hash1` trước đó)
    - Có hai đoạn con trùng nhau (`aba` xuất hiện 2 lần).
    - Kết quả `ans(3)` trả về `false`. Cập nhật `l = mid + 1 = 4`.

- **Lần 2:** `l = 4`, `r = 5`, `mid = 4`
  - Kiểm tra với `len = 4`:
    - Các đoạn con độ dài 4:
      - `abab` (từ vị trí 1)
      - `baba` (từ vị trí 2)
    - Giá trị băm khác nhau.
    - Kết quả `ans(4)` trả về `true`. Cập nhật `kq = 4`, `r = mid - 1 = 3`.

- Kết thúc vòng lặp vì `l > r`.

**Kết luận:**

- Độ dài nhỏ nhất cần tìm là `kq = 4`.

**Giải thích:**

- Với `len = 4`, tất cả các đoạn con độ dài 4 của chuỗi `s` đều khác nhau.
- Với `len = 3`, có hai đoạn con trùng nhau.

**Do đó, kết quả là 4.**

**Tóm lại, thuật toán sử dụng kỹ thuật tìm kiếm nhị phân kết hợp với phương pháp băm để kiểm tra nhanh các đoạn con trùng nhau, giúp tối ưu thời gian thực hiện.**
*/