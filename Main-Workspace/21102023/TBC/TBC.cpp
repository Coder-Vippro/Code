#include <bits/stdc++.h> 
using namespace std; 
int n;
double a[101];
double tong=0;
double minn=1e9+1;
double ans;
double temp;
int main()
{
    freopen("TBC.inp","r",stdin);
    freopen("TBC.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        tong+=a[i];
    }
    cout<<fixed<<setprecision(2)<<tong/n<<'\n';
    for(int i=1;i<=n;i++)
    {
        temp=abs(tong/n-a[i]);
        if(temp<minn)
        {
            minn=temp;
            ans=a[i];
        }
    }
    cout<<fixed<<setprecision(2)<<ans<<'\n';
}