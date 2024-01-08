#include <bits/stdc++.h>
using namespace std;
bool kt(int n)
{
    stringstream ss;
    string k;
    ss<<n;
    ss>>k;
    int demchan=0,demle=0;
    for(int i=0;i<k.size();i++)
    {
        if(i%2==0)demchan+=k[i]-48;
        else demle+=k[i]-48;
    }
    if(demchan==demle)return true;
    return false;
}
int n;
int dem=0;
int main()
{
    freopen("VEMAYMAN.inp","r",stdin);
    freopen("VEMAYMAN.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if (kt(i) == true)
        {
            dem++;
        }
    }
    cout<<dem;
}