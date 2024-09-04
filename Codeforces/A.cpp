#include <bits/stdc++.h>
using namespace std;
int n;
int x,y;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    while (n--)
    {
        cin>>x>>y;
        cout<<min(x,y)<<' '<<max(x,y)<<'\n';
    }
    return 0;
}