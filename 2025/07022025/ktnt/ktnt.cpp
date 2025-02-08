#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool ktnt(ll n)
{
    if(n<2)return false;
    if(n==2)return true;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
ll n;
int main()
{
    cin>>n;
    if(ktnt(n))cout<<"Yes";
    else cout<<"No";
}