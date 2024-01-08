#include <bits/stdc++.h>

using namespace std;
bool kt=true; //kt=true -> white
bool change(bool k)
{
    if(k==true)k=false;
    else k=true;
    return k;
}
int n;
int main()
{
    freopen("COVUA.inp","r",stdin);
    freopen("COVUA.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(kt==true)cout<<"W";
            else cout<<"B";
            kt=change(kt);
        }
        kt=change(kt);
        if(n%2==1)kt=change(kt);
        cout<<'\n';
    }
    return 0;
}
