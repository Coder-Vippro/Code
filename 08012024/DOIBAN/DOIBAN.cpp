#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int a[1000001];
int b[1000001];
int tmp;
int tmp2;
int binarySearch(int x,int m)
{
    int l = 1;
    int r = m;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (b[mid] == x)
            return mid;

        if (b[mid] < x)
            l = mid + 1;

        else
            r = mid - 1;
    }
    return -1;
}
int main()
{
    freopen("DOIBAN.inp","r",stdin);
    freopen("DOIBAN.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    for(int i=1;i<=n;i++)
    {
        tmp=a[i]+k;
        tmp2=binarySearch(tmp,m);
        while(tmp2==-1)   
        {
            tmp++;
            tmp2=binarySearch(tmp,m);
            if(tmp>b[m])
            {
                break;
            }
        }
        if(tmp2!=-1)
        {
            cout<<a[i]<<' '<<b[tmp2]<<'\n';
            b[tmp2]=-1e9-1;
        }
        tmp2=0;
        tmp=0;
    }
    return 0;
}