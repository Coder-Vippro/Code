#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{
    freopen("TAMGIAC.inp","r",stdin);
    freopen("TAMGIAC.out","w",stdout);
    cin>>n;
    int k=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            cout<<'*';
        }
        k--;
        cout<<'\n';
    }
    return 0;
}
