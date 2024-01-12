
#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int dem=0;
int dem2=0;
int dem3=0;
int dem4=0;
int dem5=0;
int dem6=0;
long long C[100001][100001];
/*long long C(long long k, long long n) 
{
    if(k>n)return 0;
    long long mot=n, hai=n*(n-1)/2, ba=n*(n-1)*(n-2)/6, 
              bon=n*(n-1)*(n-2)*(n-3)/24, 
              nam=n*(n-1)*(n-2)*(n-3)*(n-4)/120;
    if (k==1) return mot;
    if (k==2) return hai;
    if (k==3) return ba;
    if (k==4) return bon;
    if (k==5) return nam;
}*/
int main()
{
    freopen("CHONDOI.inp","r",stdin);
    freopen("CHONDOI.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    C[0][0]=C[1][0]=C[1][1]=1;
    for(int i=2;i<=n+1;i++)
    {
        C[i][0]=C[i][i]=1;
    }
    for(int i=2;i<=n+1;i++)
        for(int j=1;j<=i-1;j++)
            C[i][j]=C[i-1][j-1]+C[i-1][j];
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s[0]=='H')//2
        {dem++;}
        else if(s[0]=='S')//1
        {dem2++;}
        else if(s[0]=='G')
        {dem3++;}
        else if(s[0]=='T')
        {dem4++;}
        else if(s[0]=='P')
        {dem5++;}
        else dem6++;
        
    }
    n-=dem6;
    unsigned long long h=C[n][3];
    cout<<h;
    
}

