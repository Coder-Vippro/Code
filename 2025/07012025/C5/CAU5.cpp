/*#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100001];

void countTriangles() 
{
    sort(a, a + n); // Sắp xếp các que tính theo thứ tự tăng dần
    int acute = 0, right = 0, obtuse = 0;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            long long a2b2 = 1LL * a[i] * a[i] + 1LL * a[j] * a[j];

            // Sử dụng các hàm tìm kiếm nhị phân từ STL
            int k_max = lower_bound(a + j + 1, a + n, a[i] + a[j]) - a;
            int k_obtuse = lower_bound(a + j + 1, a + n, (int)ceil(sqrt(a2b2))) - a;
            int k_right = upper_bound(a + j + 1, a + n, (int)floor(sqrt(a2b2))) - a;

            // Đếm số lượng từng loại tam giác
            acute += k_obtuse - (j + 1);          // Tam giác nhọn: a[k] nhỏ hơn sqrt(a^2 + b^2)
            right += k_right - k_obtuse;         // Tam giác vuông
            obtuse += k_max - k_right;           // Tam giác tù
        }
    }

    cout << acute << " " << right << " " << obtuse << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("CAU5.INP", "r", stdin);
    freopen("CAU5.OUT", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    countTriangles();
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int a[1000001];
int n;
long long res;
bool check(int x,int y,int z)
{
    if(x+y>z && x+z>y && y+z>x)return true;
    return false;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        int cur=i+2;
        for(int j=i+1;j<=n;j++)
        {
            while(cur<=n && a[cur]<a[i]+a[j])cur++;
            if(a[cur]>=a[i]+a[j])cur--;
            res=cur-j;
        }
    }
    cout<<res;
}