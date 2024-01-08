#include <bits/stdc++.h> 
#define N int (1e7)
using namespace std; 
int tong=0;
int dem=0;
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
bool kt(int n)
{
    int s=0;
    for (int i = 1; i <= sqrt(n); i++) 
    {
		if (n % i == 0) 
        {
			int j = n/i;
			if (i == j) 
            {
				s = s + i;
			} 
            else 
            {
				s = s + i + j;
			}
		}
	}
    if(s-n==n)
    {
        return true;
    }
    return false;
}
int main()
{
    freopen("CAU2.inp","r",stdin);
    freopen("CAU2.out","w",stdout);
    cin>>n;
    sangngto(n);
    for(int i=1;i<=n;i++)
    {
        if(p[i]==0 && kt(i)==true)
        {
            cout<<i<<' ';
        }
    }
}