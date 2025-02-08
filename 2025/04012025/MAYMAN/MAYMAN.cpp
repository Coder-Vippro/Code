#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
string tong(string x,string k)
{
    string kq="";
    while (k.length()<x.length()) k='0'+k;
    while (k.length()>x.length()) x='0'+x;
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1+cs2+nho);
        nho=cs/10;cs=cs%10;
        kq=char(cs+48)+kq;
    }
    if(nho>0) kq='1'+kq;
    return kq;
}
string dp[101][901];
int n, k;
int startDigit;
int main()
{
    freopen("MAYMAN.inp","r",stdin);
    freopen("MAYMAN.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    dp[0][0] = "1";
    for(int s = 1; s <= k; s++)
    {
        dp[0][s] = "0";
    }
    for(int i = 1; i <= n; i++)
    {
        for(int s = 0; s <= k; s++)
        {
            dp[i][s] = "0";
            if(i==1) startDigit = 1;
            else startDigit = 0;
            for(int d = startDigit; d <= 9; d++)
            {
                if(s - d >= 0)
                {
                    dp[i][s] = tong(dp[i][s], dp[i-1][s-d]);
                }
            }
        }
    }
    if(dp[n][k] == "0") cout << 0;
    else cout << dp[n][k];
    return 0;
}