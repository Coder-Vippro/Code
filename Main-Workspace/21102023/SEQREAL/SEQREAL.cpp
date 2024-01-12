#include <bits/stdc++.h>  
using namespace std; 
long long n;
double a[101];
double t1=0,t2=0,t3=0,t4=0,t5=0;
int main()
{
    freopen("SEQREAL.inp","r",stdin);
    freopen("SEQREAL.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        t1+=a[i];
        if(a[i]<0)
        {
            t2+=a[i];
        }
        if(a[i]>=0)
        {
            t3+=a[i];
        }
        if(i%2==0)t4+=a[i];
        if(i%2==1)t5+=a[i];
    }
    cout<<fixed<<setprecision(2)<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<" "<<t5;

}