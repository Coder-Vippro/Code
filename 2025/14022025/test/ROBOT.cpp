#include <bits/stdc++.h>
using namespace std;
int x,y;
int x1,y2;
int main()
{
    freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);
    cin>>x>>y>>x1>>y2;
    cout<<max(abs(x1-x),abs(y2-y));
}