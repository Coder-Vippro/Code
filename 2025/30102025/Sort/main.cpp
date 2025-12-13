#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000001];
int t;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>t;
        bool chan=false, le=false;
        for(int i=1;i<=t;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)chan=true;
            else le=true;
        }
        if(chan==true && le==true)
        {
            sort(a+1,a+t+1);
            for(int i=1;i<=t;i++)
            {
                cout<<a[i]<<' ';
            }
        }
        else 
        {
            for(int i=1;i<=t;i++)
            {
                cout<<a[i]<<' ';
            }
        }
        cout<<'\n';
    }
}