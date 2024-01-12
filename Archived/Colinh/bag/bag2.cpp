#include <bits/stdc++.h>
#define pii pair<int,int>
#define fi first
#define sc second
using namespace std;
int f[101], vet[101],x[101];
pii a[101];
int n,m;
int main()
{
    cin>>n>>m;
    for (int i=1; i<=n; i++)cin >> a[i].fi ;
    for (int i=1; i<=n; i++)cin >> a[i].sc;
    fill(f+1,f+m+1,-1);
    f[0] = 0;
    for (int i=1; i<=n; i++)
        {
            for (int j=a[i].fi; j<=m; j++)
            if (f[j-a[i].sc] != -1 && f[j] < f[j-a[i].sc] + a[i].fi)
            {
                f[j] = f[j-a[i].sc] + a[i].fi;
                vet[j] = i;
                cout<<f[j]<<' ';
            }
                
        }
    return 0;
}