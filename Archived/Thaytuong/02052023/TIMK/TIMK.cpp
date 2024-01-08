#include <bits/stdc++.h>
using namespace std;
long long n;
long long dem=1;
long long tong=1;
int main()
{
    freopen("TIMK.inp","r",stdin);
    freopen("TIMK.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        if(tong<n)
		{	
			dem++;
        		tong*=i;
		}
	   else break;
    }
    cout<<dem;
}