#include <bits/stdc++.h> 
#define N int (1e7)
using namespace std; 
int p[N+2];
long long a[101];
int n;
void sangngto (int n) 
{
    fill(p,p+n+1,1); 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++){
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
bool is_prime(long long n) {
  if (n <= 1) {
    return false;
  }
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

long long tong=0;
int main()
{
    freopen("PRIME.inp", "r", stdin);
    freopen("PRIME.out", "w", stdout);
    cin>>n;
    sangngto(1000001);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=1000001)
        {
            if(p[a[i]]==1)tong+=a[i];
        }
        else
        {
            if(is_prime(a[i])==true)tong+=a[i];
        }
    }
    cout<<tong;
}