#include <bits/stdc++.h>
using namespace std;
int a[10000001];
bool kt[10000001];
int n,t;
long long maxx=-1e9;
int main() 
{
    cin >> t;
    while (t--) 
    {
        cin >> n;
        long long sum = 0;
        int l = (n ) / 2; 
        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            kt[i] = false;
        }
        pair <int, int> b[100001];
        for (int i = 1; i <= n; i++) 
        {
            b[i].first=a[i];
            b[i].second=i;
        }
        sort(b+1,b+n+1);
        for (int i=1;i<=n;i++) 
        {
            int c = b[i].first;
            int d = b[i].second;
            if (!kt[d] && (d == 0 || !kt[d - 1]) && (d == n - 1 || !kt[d + 1])) 
            {
                sum += c;
                kt[d] = true;
                l--;
                if (l == 0) break; 
            }
        }
        maxx=max(sum,maxx);
    }
    cout<<maxx;
    return 0;
}