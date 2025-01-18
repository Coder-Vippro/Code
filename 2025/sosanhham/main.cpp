#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
point a[10001];
bool sosanh(point a,point b)
{
    if(a.x!=b.x)return a.x<b.x;
    else return a.y<b.y;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,sosanh);
    for(int i=1;i<=n;i++)
    {
        cout<<a[i].x<<" "<<a[i].y<<'\n';
    }
    return 0;
}