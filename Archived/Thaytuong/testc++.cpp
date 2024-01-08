#include <bits/stdc++.h> 
using namespace std; 
char a[101][101];
int n,m;
void kt()
{
    bool isvaild=true;
    bool isvaild2=true;
    int dem1=0,dem2=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            if(a[i][j]==a[i][j-1] && a[i][j-1]!='#')
            {
                isvaild=true;
            }
            else if(a[i][j]=='1' || a[i][j-1]=='1')
            {
                dem1++;
                
            }
            else isvaild=false;
        } 
        if(dem1==m)isvaild=false;
        dem1=0;
        if(isvaild==true)
        {
            for (int j = 1; j <= m; j++)
            {
                a[i][j]='1';
            } 
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            if(a[j][i]==a[j-1][i] && a[j-1][i]!='#')
            {
                isvaild2=true;
            }
            else if(a[j][i]=='1' || a[j-1][i]=='1')
            {
                dem2++;
                
            }
            else isvaild2=false;
        } 
        if(dem2==n)isvaild2=false;
        dem2=0;
        if(isvaild2==true)
        {
            for (int j = 1; j <= m; j++)
            {
                a[j][i]='1';
            } 
        }
    }
}
int dem;
int main()
{
    cin>>n>>m;
    dem=(n+m)*2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    while(dem>0)
    {
        kt();
        dem--;
    }
    int dem2=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]!='0'){
                cout<<a[i][j];
                dem2++;
            }
        }
        if(dem2>0)
        cout<<'\n';
        dem2=0;
    }
    return 0;
}