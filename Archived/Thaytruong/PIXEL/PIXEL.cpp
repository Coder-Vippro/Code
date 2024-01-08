#include <bits/stdc++.h>

using namespace std;
int A[100001];
int n;
int dem=1;
int f[100001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    for(int i=1;i<=n;i++)
    {
        if(A[i]!=A[i+1])dem++;
    }
    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i]<A[i+1])
            f[i]=f[i-1]+1;
    }
    sort(f+1,f+n+1);
    cout<<dem<<'\n'<<f[n];
    return 0;
}
