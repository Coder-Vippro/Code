/*#include <bits/stdc++.h> 
using namespace std; 
int n,m;
int a[100001];
int b,c,d;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        a[i]=0;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>b>>c>>d;
        for(int j=b;j<=c;j++)
        {
            a[j]+=d;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<' ';
    }
}
*/
#include <bits/stdc++.h> 
using namespace std; 

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1, 0);  // Sử dụng vector thay vì mảng c-style để có thể dễ dàng làm việc với độ dài động

    for (int i = 1; i <= m; i++) {
        int b, c, d;
        cin >> b >> c >> d;
        a[b] += d;
        if (c + 1 <= n) {
            a[c + 1] -= d;  // Giảm giá trị tại c + 1 để duy trì tính chất của prefix sum
        }
    }

    // Tính prefix sum
    for (int i = 2; i <= n; i++) {
        a[i] += a[i - 1];
    }

    // In kết quả
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}
