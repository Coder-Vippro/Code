#include <bits/stdc++.h>
#define N int(1e7)
using namespace std;
int n;
int p[N+2];
vector <int> nt;
vector <long long> save;
void sangnt(int n)
{
    fill(p, p + n + 1, 1);
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (p[i])
        {
            for (int j = i * i; j <= n; j += i)
                p[j] = 0;
        }
    }
    for (int i = 2; i <= n; i++)
        if (p[i])
            nt.push_back(i);
}
void sinh()
{
    sangnt(1e6+1);
    for(long long i:nt)
    {
        //if(i*i>LIMIT)break;
        save.push_back(i*i);
    }
    sort(save.begin(),save.end());
}
int ans(int n)
{
    return save[lower_bound(save.begin(),save.end(),n)-save.begin()];
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("SDB.INP","r",stdin);
    //freopen("SDB.OUT","w",stdout); 
    sinh();
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        cout<<ans(x)<<' ';
    }
}