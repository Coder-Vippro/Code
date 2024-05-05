#include <bits/stdc++.h>
using namespace std;
long long n;
long long k=5;
bool digit[101];
bool kt(long long n)
{
    int k=log10(n)+1;
    for(int i=0;i<=10;i++)digit[i]=false;
    while(n>0)
    {
        if(digit[n%10]==true)return false;
        digit[n%10]=true;
        n/=10;
    }
    return true;
}
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        if(k<=n)
        {
           if(kt(k)==true){dem++;}
        }
        else break;
        k+=5;
    }
    cout<<dem;
}