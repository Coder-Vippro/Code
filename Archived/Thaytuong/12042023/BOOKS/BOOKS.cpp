#include <iostream>
#include <vector>
using namespace std;
int n;
int a[1001][1001];
int b[1001][1001];
int M = 0;
int chieucao = 0;
int dem=0;
int main() 
{
    ios_base::sync_with_stdio(false);
    freopen("BOOKS.INP", "r", stdin);
    freopen("BOOKS.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            cin >> a[i][j];
            b[i][j]=0;
        }
    }
    for (int i = 1; i <= n; i++) 
    {
        M=0;
        for (int j = n; j >0; j--) 
        {
            if(M<a[i][j])
            {
                M=a[i][j];
                b[i][j]=1;
            }
        }
    }
    for (int i = 1; i <= n; i++) 
    {
        M=0;
        for (int j = 1; j <= n; j++) 
        {
            if(M<a[i][j])
            {
                M=a[i][j];
                b[i][j]=1;
            }
        }
    }
    for (int i = 1; i <= n; i++) 
    {
        M=0;
        for (int j = 1; j <= 0; j++) 
        {
            if(M<a[j][i])
            {
                M=a[j][i];
                b[j][i]=1;
            }
        }
    }
    for (int i = 1; i <= n; i++) 
    {
        M=0;
        for (int j = n; j > 0; j--) 
        {
            if(M<a[j][i])
            {
                M=a[j][i];
                b[j][i]=1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(b[i][j]!=0)dem++;
        }
    }
    
    cout<<dem;
}