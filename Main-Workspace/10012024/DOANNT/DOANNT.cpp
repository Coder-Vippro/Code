#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int tinh[N+2];
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
int q,l,r;
int tmp=0;
int main()
{
    freopen("DOANNT.inp","r",stdin);
    freopen("DOANNT.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sangngto(10000001);
    for(int i=0;i<=10000001;i++)
    {
        if(p[i]==1)
        {
            tmp++;
        }
        tinh[i]=tmp;
    }
    cin>>q;
    while (q--)
    {
        cin>>l>>r;
        cout<<tinh[r]-tinh[l]<<'\n';
    }
    return 0;
}