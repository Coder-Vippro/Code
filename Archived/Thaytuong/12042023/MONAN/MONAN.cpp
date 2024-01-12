#include <iostream>
using namespace std;
int n;
string C[101][101];
string tong(string x,string k)
{
    string kq="";
    while (k.length()<x.length()) k='0'+k;
    while (k.length()>x.length()) x='0'+x;
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1+cs2+nho);
        nho=cs/10;cs=cs%10;
        kq=char(cs+48)+kq;
    }
    if(nho>0) kq='1'+kq;
    return kq;
}
string kq="0";
int main() 
{
    freopen("MONAN.inp","r",stdin);
    freopen("MONAN.out","w",stdout);
    cin>>n;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    C[0][0]=C[1][0]=C[1][1]='1';
    for(int i=2;i<=100;i++)
    {
        C[i][0]=C[i][i]='1';
    }
    for(int i=2;i<=100;i++)
        for(int j=1;j<=i-1;j++)
            C[i][j]=tong(C[i-1][j-1],C[i-1][j]);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        kq=tong(kq,C[n][i]);
    }
    cout<<kq;
    return 0;
}