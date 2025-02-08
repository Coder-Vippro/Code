/*#include <bits/stdc++.h>
using namespace std;
int biendoi[101];
int q;
long long l,r;
int tcs(long long n)
{
    int tong=0;
    while(n>0)
    {
        tong+=n%10;
        n/=10;
    }
    return tong;
}
int biendoi(long long n)
{
    while(n>=10)
    {
        n=tcs(n);
    }
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>q;
    for(int i=1;i<=10;i++)
    {
        biendoi[i]=biendoi(i);
    }
    while(q--)
    {
        cin>>l>>r;
        long long ans=0;
        for(long long i=l;i<=r;i++)
        {
            int nums=i%9;
            if(nums==0)nums=9;
            ans+=biendoi[nums];
        }
        cout<<ans;
    }
}
*/
/*#include <bits/stdc++.h>
using namespace std;
int q; 
int biendoi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
long long l, r; 
long long tcs(long long start, long long end) 
{
    long long sum = 0;
    for (long long i = start; i <= end; i++) 
    {
        int nums = i % 9; 
        if (nums == 0) nums = 9; 
        sum += biendoi[nums]; 
    }
    return sum;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    while (q--) 
    {
        cin >> l >> r;
        long long ans = 0;
        //long long full_cycles = (r - l + 1) / 9;  
        //long long startRemainder = l;
        //long long endRemainder = l + (r - l + 1) % 9 - 1;
        ans += tcs(l, r);
        cout << ans << "\n";
    }
    return 0;
}
*/
/*#include <iostream>
using namespace std;

// Hàm S(N) tính tổng D(i) với i từ 1 đến N
// Với D(i) = (i-1) mod 9 + 1, dãy này có chu kỳ 9 với tổng mỗi chu kỳ = 45.
long long sumDigitalRoots(unsigned long long N) {
    if (N == 0)
        return 0;
    unsigned long long fullCycles = N / 9;
    unsigned long long remainder = N % 9;
    // Tổng từ 1 đến 9 là 45, và tổng các số nhỏ hơn remainder là: 1+2+...+remainder = remainder*(remainder+1)/2
    return fullCycles * 45 + remainder * (remainder + 1) / 2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    while(q--){
        unsigned long long l, r;
        cin >> l >> r;
        
        long long ans = sumDigitalRoots(r) - sumDigitalRoots(l - 1);
        cout << ans << "\n";
    }
    
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int q;
unsigned long long l,r;
long long digitalroot(long long n)
    {
        if(n==0)return 0;
        unsigned long long full_cycles=n/9;
        unsigned long long reminder=n%9;
        return full_cycles*45 + reminder *(reminder+1)/2;
    }
int main()
{
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<digitalroot(r)-digitalroot(l-1)<<'\n';
    }
}