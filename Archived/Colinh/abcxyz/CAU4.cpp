#include <bits/stdc++.h>
#define N int (1e7+1)
using namespace std;
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
int A[1000001];
int dem=0;
int main()
{
    freopen("CAU4.INP","r",stdin);
    freopen("CAU4.OUT","r",stdout);
    sangngto(1e7);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        while(A[i]>=2)
        {
            if(p[A[i]]==1)
            {
                dem++;
            }
            A[i]--;
        }
        cout<<dem<<' ';
        dem=0;
    }
}