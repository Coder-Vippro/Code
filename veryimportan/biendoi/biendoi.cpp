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