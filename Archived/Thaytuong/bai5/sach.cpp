#include <iostream>
using namespace std;
int n;
unsigned long long kq=0;
int a,b,c,k;
unsigned long long C[652][652]; 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("sach.inp","r",stdin);
    freopen("sach.out","w",stdout); 
    cin>>a>>b>>c>>k;
    C[0][0]=C[1][0]=C[1][1]=1;
    for(int i=2;i<=651;i++)
    {
        C[i][0]=C[i][i]=1;
    }
    for(int i=2;i<=651;i++)
        for(int j=1;j<=i-1;j++)
            C[i][j]=C[i-1][j-1]+C[i-1][j];
    for(int i=1;i<=a;i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int h = 1; h <= c; h++)
            {
                if(i+j+h==k)
                {
                    kq=kq+C[a][i]*C[b][j]*C[c][h];
                }
            }
            
        }
        
    }
    cout<<kq;
    
    return 0;
}