#include <bits/stdc++.h>
using namespace std;
int sosanh(string a, string b) 
{
    while(a.size()<b.size()) a="0"+a;
    while(b.size()<a.size()) b="0"+b;
    if(a>b) return 1;
    if(a<b) return -1;
    return 0;
}
string LCS(string X, string Y) 
{
    int m = X.size(), n = Y.size();
    vector<vector<string>> dp(m + 1, vector<string>(n + 1, ""));
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) 
        {
            if (X[i - 1] == Y[j - 1]) 
            { 
                dp[i][j] = dp[i - 1][j - 1] + X[i - 1]; 
            } 
            else 
            {
                //dp[i][j] = (dp[i - 1][j].size() > dp[i][j - 1].size()) ? dp[i - 1][j] : dp[i][j - 1]; 
                if(sosanh(dp[i - 1][j], dp[i][j - 1])==1) dp[i][j]=dp[i - 1][j];
                else dp[i][j]=dp[i][j - 1];
            }
        }
    }
    return dp[m][n];
}
string x, y;
int main() {

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BAI5.INP", "r", stdin);
    freopen("BAI5.OUT", "w", stdout);
    cin>>x>>y;
    string s=LCS(x, y);
    while(s[0]=='0') s.erase(0,1);
    if(s.size()==0) cout<<"0";
    else cout<<s;
    return 0;
}
