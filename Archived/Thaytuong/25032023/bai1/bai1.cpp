/*
#include <bits/stdc++.h>
using namespace std;
long long n;
long long i=2;
long long dem=1;
long long dem2=0;
int main()
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin>>n;
    while(n>=i)
    {
        while(n%i==0)
        {
            n=n/i;
            dem2++;
        }
        dem=dem*(dem2+1);
        dem2=0;
        i++;
    }
    cout<<dem;
    return 0;
} 
*/
#include <bits/stdc++.h>
using namespace std;
long long n;
int main() 
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin >> n;
    int de = 0;
    int cnt = 0;
    for (long long i = 1; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            cnt += 2;
            if (i * i == n) 
            {
                cnt--;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
