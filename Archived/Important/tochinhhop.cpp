#include <bits/stdc++.h>
using namespace std;
//tohop
unsigned long long C(int n, int k)
{
    if(k==0 || k==n)return 1;
    else if(k==1)return n;
    else return C(n-1,k-1)+C(n-1,k);
}
//chinhhop
unsigned long long A(int n,int k)
{
    unsigned long long t=1;
    for(int i=n;i>=n-k+1;i--)t=t*i;
    return t;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    //cout<<C(n,3)<<' '<<A(n,2);
}
