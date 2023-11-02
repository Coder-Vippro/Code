#include <bits/stdc++.h>
using namespace std;
string nhan(string a, string b)
{
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
        tmp+=carry;
        carry=tmp/10;
        res=char(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}
string a="1";
string k;
stringstream ss;
int n;
int main()
{
    freopen("GIAITHUA.inp","r",stdin);
    freopen("GIAITHUA.out","w",stdout);
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        ss<<i;
        ss>>k;
        ss.clear();
        a=nhan(a,k);
        k.clear();
    }
    cout<<a;
}
