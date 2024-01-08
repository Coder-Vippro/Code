#include <bits/stdc++.h>
using namespace std;
string s;
long long dem=0,kq=0;
long long pow1(long long a,long long b)
{
    if(b==0)return 1;
    for(int i=1;i<b;i++)
    {
        a=a*2;
    }
    return a;
}
int main()
{
    freopen("DIEM.inp","r",stdin);
    freopen("DIEM.out","w",stdout);
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='T')
        {
            kq+=pow1(2,dem);
            dem++;
        }
        else dem=0;
    }
    cout<<kq;
}