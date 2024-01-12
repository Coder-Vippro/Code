#include <bits/stdc++.h> 
using namespace std;
void uoc_nguyen_duong(long long n) 
{
    vector<long long> uocs; 
    for (long long i = 1; i * i <= n; ++i) 
    {
        if (n % i == 0) {
            uocs.push_back(i);
            if (n / i != i) 
            {
                uocs.push_back(n / i);
            }
        }
    }
    sort(uocs.begin(),uocs.end());
    for (long long uoc : uocs) 
    {
        cout << uoc << '\n';
    }
} 
long long n;
int main()
{
    freopen("UOC.inp","r",stdin);
    freopen("UOC.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    uoc_nguyen_duong(n);
}