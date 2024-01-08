#include <bits/stdc++.h>
using namespace std;
int n,m;
int f[101];
int vet[101];
pair <int,int> p[101];
int dem=0;
int main()
{
    cin>>n>>m;
    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = p[i].first; j <= m; j++)
        {
            if(f[j]<f[j-p[i].second]+p[i].first)
            {
                f[j]=f[j-p[i].second]+p[i].first;
                
            }    
        } 
    }
    cout<<f[n];
    return 0;
}