#include <bits/stdc++.h>

using namespace std;
int f[1000][1000];
string x,y;
int main()
{
    freopen("XAUCON.inp","r",stdin);
    freopen("XAUCON.out","w",stdout);
    cin>>x>>y;
    int n=x.size(), m=y.size();
    for(int i=0;i<=n;i++)f[i][0]=0;
    for(int i=0;i<=m;i++)f[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(x[i-1]==y[j-1])f[i][j]=f[i-1][j-1]+1;
            else f[i][j]=max(f[i-1][j], f[i][j-1]);
        }
    }
    
    int k=f[n][m];
    string w="";
    while(f[n][m]!=0){
        if(x[n-1]==y[m-1]){
            w+=x[n-1];
            n--;
            m--;//cout<<w<<'\n';
        }
        else{
            if(f[n-1][m]>=f[n][m-1])n--;
            else m--;
        }

    }
    if(w.size()==x.size())
    {
        cout<<"CO";
    }
    else
    {
        cout<<"KHONG";
    }
    return 0;
}