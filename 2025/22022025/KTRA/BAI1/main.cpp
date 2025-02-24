#include <bits/stdc++.h>
#define ll long long
#define N int(1e7)
using namespace std;
int n;
int p[N+1];
vector <int> nt;
vector <unsigned long long> save;
long long pow2(int x)
{
    return 1LL*x*x;
}   
long long pow8(int x)
{
    if(x>=43)return -1;
    return 1LL*x*x*x*x*x*x*x*x;
}
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

void dem()
{
    sangnt(1e6+1);
    int dem=0;
    for(long long i:nt)
    {
        long long k=pow8(i);
        if(k!=-1 && k<=1e12)save.push_back(k);
        else break;
    }
    for(int i=0;i<nt.size();i++)
    {
        if(pow2(nt[i])>1e12)break;
        for(int j=i+1;j<nt.size();j++)
        {
            if(pow2(nt[j])>1e12)break;
            long long nums=pow2(nt[i])*pow2(nt[j]);
            if(nums>1e12)break;
            save.push_back(nums);
        }
    }
    sort(save.begin(),save.end());
}
int ans(long long n)
{
    return upper_bound(save.begin(),save.end(),n)-save.begin();
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("input05.txt","r",stdin);
    //freopen("BAI1.OUT","w",stdout);
    cin>>n;
    dem();
    while(n--)
    {
        long long x;
        cin>>x;
        cout<<ans(x)<<'\n';
    }
    return 0;
}