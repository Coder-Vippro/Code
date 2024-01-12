#include <iostream>
#include <iomanip>
using namespace std;
int n;
int x;
int chan=0,le=0;
int A[10001];
bool kt=true;
int dem=0;
int main()
{
    freopen("BDDS.INP","r",stdin);
    freopen("BDDS.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        while(A[i]%2==0)
        {
            A[i]=A[i]/2;
            dem++;
        }
    }
    cout<<dem;
}