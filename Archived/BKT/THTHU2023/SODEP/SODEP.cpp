#include <bits/stdc++.h> 
using namespace std; 
long long n,luu,k=1,dem=0,i=1;
int main()
{
    freopen("SODEP.inp","r",stdin);
    freopen("SODEP.out","w",stdout);
    cin>>n;
    while(n>0)
    {
        k=i;
        while(k>0)
        {
            if(k%2==1)
            {
                dem++;
            }
            k/=2;
        }
        if(dem%2==0){n--;luu=i;}
        i++;
        dem=0;
    }
    cout<<luu;
}