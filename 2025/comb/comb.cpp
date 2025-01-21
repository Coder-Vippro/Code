#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long n;
long long kq = 0;
int main() 
{
    //freopen("comb.inp", "r", stdin);
    //freopen("comb.out", "w", stdout);
    cin >> n;
    for (long long d = 1; d <= n; d++) 
    {
        long long m = (n / d) % MOD;
        long long tmp2 = (m * (m - 1) / 2) % MOD; 
        kq += (d * tmp2) % MOD;
    }
    cout << kq % MOD;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long n;
long long tonguoc(long long a, long long b)
{
    long long kq=0;
    for(long long i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            kq+=i;
        }
    }
    return kq;
}
int main()
{
    freopen("comb.inp","r",stdin);
    freopen("comb.out","w",stdout);
    cin>>n;
    while(n>0)
    {
        long long ans=0;
        for(long long i=1;i<=n;i++)
        {
            for(long long j=i+1;j<=n;j++)
            {
                ans+=tonguoc(i,j);
            }
        }
        cout<<n<<' '<<ans<<'\n';
        n--;
    }
}
*/