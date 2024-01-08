#include <bits/stdc++.h>
using namespace std;
int n,c,k;
int a,b;
int x[100001];
int dem=0;
int main() 
{
    freopen("HSG.inp","r",stdin);
    freopen("HSG.out","w",stdout);
   cin>>n>>c>>k;
   for(int i=1;i<=n;i++)
   {
        cin>>a>>b;
        if(a==0)x[i]=100000;
        else if(a>=k)x[i]=0;
        else
        {
            if(b==0)
            {
                x[i]=100000;
            }
            else if((k-a)%b!=0)
            {
                x[i]=(k-a)/b+1;
            }
            else x[i]=(k-a)/b;
        }
   }
   sort(x+1,x+n+1);
   for(int i=1;i<=n;i++)
   {
        if(c>=0)
        {
            c=c-x[i];
            dem++;
        }
   }
   cout<<dem;
}
