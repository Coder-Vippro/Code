#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
long long n,s,m=1e12;
long long a[N+10],f[N+10];
vector <int> p;
bool isvaild=false;
int main()
{

    freopen("REMOVE.inp","r",stdin);
    freopen("REMOVE.OUT","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    cin>>n>>s;f[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];f[i]=f[i-1]+a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=i+1;j--)
        {
            if(f[j]-f[i]==s)
            {
                cout<<n-j+i;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}