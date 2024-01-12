#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
int k=2;
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
int main()
{
    freopen("bai1.INP","r",stdin);
    freopen("bai1.OUT","w",stdout);
    sangngto(65536);
    cin>>n;
    if(p[n]==1)
    {
        cout<<n<<" la so nguyen to";
        return 0;
    }
    else 
    {
        while(n>=k)
        {
            while(n%k==0)
            {
                n=n/k;
                cout<<k<<' ';
            }
            k++;
        }
    }
    return 0;
}