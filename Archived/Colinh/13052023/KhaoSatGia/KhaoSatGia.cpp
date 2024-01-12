#include <bits/stdc++.h> 
using namespace std; 
int n;
string s;
long long dem=0;
int minn=1000000000;
int main()
{
    freopen("KhaoSatGia.inp","r",stdin);
    freopen("KhaoSatGia.out","w",stdout);
    cin>>n;
    while (n--)
    {
        cin>>s;
        cout<<s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]-48<minn)minn=s[i]-48;
        }
        dem+=minn;
        cout<<minn<<'\n';
        minn=1000000000;
    }
    cout<<dem;
}
