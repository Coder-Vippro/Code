#include <bits/stdc++.h>
using namespace std;
float a,b,c,d,e,f;
int main()
{
    freopen("TGDD.inp","r",stdin);
    freopen("TGDD.out","w",stdout);
    while(cin>>a>>b>>c>>d>>e>>f)
    {
        if(a/d==b/e && b/e==c/f)
        {
            cout<<"Yes"<<'\n';
        }
        else cout<<"No"<<'\n';
    }
    return 0;
}