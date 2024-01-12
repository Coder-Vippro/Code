#include <bits/stdc++.h>
using namespace std;
int n;
long long l,r,tmp1,tmp2,maxx,minn;
long long dem=0;
int main()
{
    freopen("DEBIEN.inp","r",stdin);
    freopen("DEBIEN.out","w",stdout);
    cin>>n;
    while (n--)
    {
        cin>>l>>r;
        maxx=r;
        minn=l;
        tmp1=sqrt(l);
        tmp2=sqrt(r);
        for(long long i=tmp1;i<=tmp2;i++)
        {
            if(i*i<minn)
            {
                minn=i*i;
            }
            else if(i*i>=minn && i*i<=maxx)
            {
                dem++;
            }
            else break;
        }
    }
    cout<<dem;
    
}