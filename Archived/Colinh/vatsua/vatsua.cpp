#include <bits/stdc++.h>
using namespace std;
int A[100001];
int n;
int dem=0;
int k=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>A[i];
    sort(A+1,A+n+1);
    for(int i=n;n>0;i--)
    {
        if(A[i]-k>=0)
        dem=dem+A[i]-k;
        k++;
        
    }
    cout<<dem;
}