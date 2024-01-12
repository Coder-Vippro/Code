#include <bits/stdc++.h> 
using namespace std; 
int A[100006];
int n;
int dem=1;
int main()
{
    freopen("Soluong.inp","r",stdin);
    freopen("Soluong.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    for(int i=2;i<=n;i++)
    {
        if(A[i]!=A[i-1])dem++;
    }
    cout<<dem;
}