#include <bits/stdc++.h>
//#define N int (1e7)
using namespace std;
//vector <bool> p(N+1,true);
//vector <long long> nt;
long long d;
long long n;
/*void sangnt(int n)
{
    //fill(p,p+n+1,1);
    p[0]=false;
    p[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==true)
        for(int j=i*i;j<=n;j+=i)
        {
            p[j]=false;
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(p[i]==true)
        {
            nt.push_back(i);
        }
    }
}*/
/*long long uocntnhonhat(long long n) {
    if (n % 2 == 0) return 2;
    for (long long i = 3; i * i <= n; i += 2) 
    { 
        if (n % i == 0) return i;
    }
    return n; 
}
long long ans(long long n)
{
    int steps=0;
    while(n>0)
    {
        d=uocntnhonhat(n);
        n-=d;
        steps++;
    }
    return steps;
}
    */
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    long long tmp=n;
    if(n%2==0)
    {
        cout<<n/2;
        return 0;
    }
    for(long long i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            tmp=i;
            break;
        }
    }
    n-=tmp;
    cout<<n/2+1;
}