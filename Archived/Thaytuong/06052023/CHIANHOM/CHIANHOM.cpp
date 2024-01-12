#include <bits/stdc++.h> 
using namespace std; 
pair <long long,int> p[100001];
int n;
int dem=1;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CHIANHOM.inp","r",stdin);
    freopen("CHIANHOM.out","w",stdout);
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>p[i].second>>p[i].first;
    }
    sort(p+1,p+n+1);
    for (int i = 2; i <= n; i++)
    {
        if(p[i].first==p[i-1].first)
        {
            if(p[i].second==p[i-1].second)
            {
                dem+=0;
            }
            else dem++;
        }
        else dem++;
    }
    cout<<dem;
}