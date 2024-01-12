#include <bits/stdc++.h>
using namespace std;
int a,b;
int r;
int q;
int main()
{
    freopen("LPS.inp","r",stdin);
    freopen("LPS.out","w",stdout);
    cin>>a>>b;
    while(b>0)
    {
        q=a/b;
        r=a%b;
        a=b;
        b=r;
        cout<<q<<' ';
    }
    return 0;
}