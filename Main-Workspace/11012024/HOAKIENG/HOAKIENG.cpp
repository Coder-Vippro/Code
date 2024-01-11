#include <bits/stdc++.h>
using namespace std; 
int n,k;
int a[4];
int dem=0;
int main()
{
    freopen("HOAKIENG.inp","r",stdin);
    freopen("HOAKIENG.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[1]>>a[2]>>a[3];
        sort(a+1,a+4);
        if(a[3]-a[2]>k)
        {
            if(a[2]-a[1]>k)
            {
                dem+=2;
            }
            else dem++;
        }
        else
        {
            if(a[2]-a[1]>k)dem++;
            if(a[3]-a[1]>k)dem++;
        }
    }
    cout<<dem;
}