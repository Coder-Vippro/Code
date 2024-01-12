#include <bits/stdc++.h>
using namespace std;
string s[100001];
int A[100001],B[1000001],C[100001];
int maxx=-1e9;
int vt;
int dem=0;
int tmp=0;
int tong=0;
int main()
{
    freopen("TIENHOA.INP","r",stdin);
    freopen("TIENHOA.OUT","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        cin>>A[i]>>B[i]>>C[i];
        while(A[i]>=B[i])
        {
            A[i]=A[i]-B[i];
            tmp++;
            A[i]=A[i]+C[i];
        }
        if(tmp>maxx)
        {
            vt=i;
            maxx=tmp;
        }
        cout<<tmp<<' ';
        tong=tong+tmp;
        tmp=0;
    }
    cout<<'\n'<<tong<<'\n'<<s[vt];
    return 0;
}