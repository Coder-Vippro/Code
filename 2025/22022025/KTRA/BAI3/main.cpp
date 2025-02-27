#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int main() {
    
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("WORK.INP","r",stdin);
    freopen("WORK.OUT","w",stdout);
    cin >> N;

    vector<int> t(N); 
    vector<int> p(N - 1);

    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    for (int i = 0; i < N - 1; i++) {
        cin >> p[i];
    }

    vector<int> dp(N); 

    dp[0] = t[0];

    for (int i = 1; i < N; i++) 
    {
        dp[i] = dp[i - 1] + t[i];
        if (i > 0) 
        {
            dp[i] = min(dp[i], dp[i - 2] + p[i - 1]);
        }
    }
    cout << dp[N - 1];
    return 0;
}