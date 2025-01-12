/*#include <bits/stdc++.h>
using namespace std;
int n;
int a[100001];
int f[100001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    f[n+1]=0;
    for(int i=n;i>=1;i--)
    {
        if(a[i]%2==0)
        {
            f[i]=f[i+1]+1;
        }
        else f[i]=f[i+1];
    }
    for(int i=1;i<=n;i++)
    { 
        cout<<f[i]<<' ';
    }
}
*/

#include <bits/stdc++.h>
using namespace std;
int n;
int a[100001];
long long f[100001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        f[i]=a[i];
        for(int j=1;j<i;j++)
        {
            if(a[i]>a[j])
            {
                f[i]=max(f[i],f[j]+a[i]);
                
            }
        }
    }
    int maxx=-1e9;
    for(int i=1;i<=n;i++)
    {
        if(f[i]>maxx)maxx=f[i];
    }
    cout<<maxx;
}
/*
#include <bits/stdc++.h>
using namespace std;
string s;
int ans(string s)
{
    if (s=="000")return 0;
    if (s=="001")return 1;
    if (s=="010")return 2;
    if (s=="011")return 3;
    if (s=="100")return 4;
    if (s=="101")return 5;
    if (s=="110")return 6;
    if (s=="111")return 7;
    return -1;
}
string tmp="";
int main()
{
    cin>>s;
    while(s.size()%3!=0)
    {
        s='0'+s;
    }
    //s+='a';
    //cout<<s;
    for(int i=0;i<s.size();i++)
    {
        if(tmp.size()<3)
        {
            tmp+=s[i];
        }
        if(tmp.size()==3)
        {
            cout<<ans(tmp);
            tmp.clear();
        }
    }
    return 0;
}
*/