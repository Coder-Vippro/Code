#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC optimize("unroll-loops")
#define N int (1e7)
using namespace std;
int p[N+2];
int dem1=0;
int temp=0;
int n;
int maxx=-1e9-1;
void sangngto (int n) 
{
    fill(p,p+n+1,1); 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
string s;
int main()
{
    freopen("NTMAX.inp","r",stdin);
    freopen("NTMAX.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> s;
    s+='a';
    sangngto(6000001);
    for(int i=0;i<s.size();i++)
    {
        if (s[i]>='0' && s[i]<='9')
        {
            dem1++;
            temp=temp*10+(s[i]-48);
        }
        else 
        {
            if (p[temp]==1)
            {
                maxx=max(maxx,temp);
            }
            temp=0;  
        }
    }
    maxx=max(0,maxx);
    cout<<dem1<<'\n';
    cout<<maxx;
    return 0;
}