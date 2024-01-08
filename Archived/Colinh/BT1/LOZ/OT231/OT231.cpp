#include <bits/stdc++.h>
using namespace std;
int A[100001];
int B[100001];
int n;
int x;
int main()
{
    //freopen("OT231.INP","r",stdin);
    //freopen("OT231.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while (n--)
    {
        cin>>x;
        for (int i = 1; i <= x; i++)
        {
            cin>>A[i];
        }
        B[1]=A[1];
        for (int i = 2; i <= x; i++)
        {
            B[i]=A[i]*A[i-1]/__gcd(A[i],A[i-1]);
        }
        B[x+1]=A[x];
        for (int i = 1; i <= x+1; i++)
        {
            cout<<B[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}