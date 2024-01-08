#include <bits/stdc++.h>

using namespace std;
bool kt(int n)
{
    int k=sqrt(n);
    if(k*k==n)return true;
    else return false;
}
int n;
int x;
int chan=0,le=0;
int main()
{
    freopen("DEMUOC.INP","r",stdin);
    freopen("DEMUOC.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(kt(x)==true)
        {
            le++;
        }
        else chan++;
    }
    cout<<chan<<'\n'<<le;
    return 0;
}
