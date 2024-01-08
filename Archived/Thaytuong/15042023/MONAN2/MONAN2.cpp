#include <iostream>
using namespace std;
unsigned long long C(int n, int k)
{
    if(k==0 || k==n)return 1;
    else if(k==1)return n;
    else return C(n-1,k-1)+C(n-1,k);
}
int n;
unsigned long long kq=0;
int main() 
{
    freopen("MONAN2.inp","r",stdin);
    freopen("MONAN2.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        kq+=C(n-1,i-1);
    }
    cout<<kq;
    return 0;
}