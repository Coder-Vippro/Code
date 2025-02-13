#include <bits/stdc++.h>
using namespace std;
string s;
long long n=0,m=0;
int t;
int main()
{
    freopen("xau.inp","r",stdin);
    freopen("xau.out","w",stdout);
    cin>>t>>s;
    long long k=s.size();
    for(long long i=1;i<k;i++)
    {
        if(s[i]!=s[i-1])
        {
            n=i;
            //cout<<n<<'\n';
            break;
        }
        //else break;
    }
    for(long long i=k-2;i>=0;i--)
    {
        if(s[i]!=s[i+1])
        {
            m=i;
            //cout<<m<<'\n';
            break;
        }
        //else break;
    }
    --n;
    ++m;
    //cout<<n<<' '<<m<<'\n';
    if(n==-1)
    {
        cout<<k*(k+1)/2;
    }
    else if(s[0]==s[k-1])
    {
        cout<<(n+1)*(k-m)+n+1+1+k-m;
    }
    else
    {
        //cout<<k;
        cout<<n+2+k-m;
    }
    //cout<<' '<<n<<' '<<m;
}