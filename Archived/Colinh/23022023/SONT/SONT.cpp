#include <iostream>
#include <iomanip>
using namespace std;
long long n;
bool ktnt(long long n)
{
    int dem=1;
    if(n%2==0 && n!=2)
    {
        return false;
    }
    if(n==2 || n==3 || n==5 || n==7)
    {
        return true;
    }
    for(int i=1;i*i<=n;i++)
    {
        dem++;
        if(n>2)return false;
    }
    if(dem>2)return false;
    if(dem==2)return true;
    return false;
}
int main()
{
    freopen("SONT.INP","r",stdin);
    freopen("SONT.OUT","w",stdout);
    cin>>n;
    if(ktnt(n)==true)
    {
        cout<<1;
    }
    else cout<<0;
}