#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[300005];
int minn=INT_MAX;
int vitri;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<minn)
        {
            minn=a[i];
            vitri=i;
        }
    }
    
}