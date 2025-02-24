#include <bits/stdc++.h>

using namespace std;
int n, x;
long long ans = 0;
int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> x;
    for(int c = 1; c <= n; ++c) 
    {
        if(c == x) continue;

        for(int d = 1; d <= n; ++d) 
        {
            if(d == x) continue;

            int M = c * d + n;
            int sqrtM = int(sqrt(M));
            for(int a = c + 1; a <= M; ++a) 
            {
                if(M % a == 0) 
                {
                    int b = M / a;
                    if(b > d) 
                    {
                        ans++;
                    }
                }
                if(a > sqrtM && a * a > M) break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
