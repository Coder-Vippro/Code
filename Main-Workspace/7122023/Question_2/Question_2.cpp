#include <bits/stdc++.h>
using namespace std;
int demuoc(int num)
{
    int count = 0;
    int sqrtNum = sqrt(num);
    for (int i = 1; i <= sqrtNum; ++i)
    {
        if (num % i == 0)
        {
            count += 2;
            if (i == num / i)
            {
                count--;
            }
        }
    }
    return count;
}
int uocmax = -1e9;
int luu;
int main()
{
    int n, m, k;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        k = demuoc(i);
        if (k > uocmax)
        {
            luu = i;
            uocmax = k;
        }
    }
    cout << luu << ' ' << uocmax;
}