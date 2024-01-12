#include <bits/stdc++.h> 
using namespace std; 
long long f[100005],l,r;
bool tcs(long long n) 
{
    long long sum = 0;
	for (long long i = 1; i * i <= n; i++) 
    {
		if (n % i == 0) 
        {
            sum+=i;
            if(n/i!=i)
            sum=sum+n/i;
		}
	}
	if(sum>n)return true;
    return false;
}

int k=1,i=1,n;
int main()
{
    //freopen("RICHNUM.INP","r",stdin);
    //freopen("RICHNUM.OUT","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    f[0]=0;
    for(long long i=1;i<=100005;i++)
    {
        if(tcs(i)==true)f[i]=f[i-1]+1;
        else f[i]=f[i-1];
    }
    while(n--)
    {
        cin>>l>>r;
        //cout<<f[l]<<' '<<f[r]<<'\n';
        cout<<f[r]-f[l-1]<<'\n';
    }
    return 0;
}