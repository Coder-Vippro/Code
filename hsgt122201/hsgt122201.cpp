#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int a,b;
int p[N+2];
int n;
void sangngto (int n) 
{
    fill(p,p+n+1,1); 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
bool check(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
        {
            cnt+=i;
        }
    if(cnt<=n)return false;
    return true;
}
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sangngto(100001);
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(p[i]==0)
        {
            if(check(i)==true)
            dem++;
        }
    }
    cout<<dem;
    return 0;
}