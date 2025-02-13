#include <bits/stdc++.h>
using namespace std;
int x,n;
set<int> s;
int main()
{
    freopen("chia.inp","r",stdin);
    freopen("chia.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        s.insert(x%68);
    }
    cout<<s.size();
}