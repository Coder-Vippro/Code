#include <bits/stdc++.h> 
using namespace std; 
char a[101][101];
int n ,m;
bool oke1=true;
bool oke2=true;
int main()
{
    freopen("NEN.inp","r",stdin);
    freopen("NEN.out","w",stdout);
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin>>a[i][j]; 
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            oke1=true;
            if(a[i][j]=='#'){cout<<'#';oke1=false;}
            else{
                
                oke2=true;
                for(int c=1;c<=m;c++)
                {
                    if(a[i][c]=='#')
                    {
                        oke1=false;
                    }
                }
                for(int h=1;h<=n;h++)
                {
                    if(a[h][j]=='#')
                    {
                        oke2=false;
                    }
                }
                if(oke1==false && oke2==false)
                {
                    cout<<'.';
                }
            }
        }
        if(oke1==false)cout<<'\n';
    }
    

    
}