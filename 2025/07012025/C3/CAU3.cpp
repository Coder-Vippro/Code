#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")
string s;
int tong=0;
int ans=0;
int tmp;
int main()
{
    freopen("CAU3.INP","r",stdin);
    freopen("CAU3.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();++i)
    {
        tong+=s[i]-48;
    }
    if(tong%3!=0)ans=-1;
    for(int i=0;i<s.size();++i)
    {
        tmp=tong;
        for(int j=i;j<s.size();++j)
        {
            tmp-=s[j]-48;
            if(tmp%3==0)ans++;
        }
    }
    cout<<ans;
}
