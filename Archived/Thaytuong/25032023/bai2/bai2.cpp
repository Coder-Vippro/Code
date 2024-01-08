#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 

int n,m;
bool kt(int n)
{
    int dem=0;
    int dem5=1;
    bool kt1=false;
    int k=n;
    int tong=0;
    while(n>0)
    {
        tong=tong*10+n%10;
        n=n/10;
    }
    if(tong!=k)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            dem5++;
            if(dem5 >= 3) {kt1=true;break;}
            while(n%i==0)
            {
                n=n/i;
            }
        }  
        i++;
    }
    if(kt1==false)return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    cin>>n>>m;
    int dem=0;
    for(int i=n;i<=m;i++)
    {
        if(kt(i)==true)dem++;
    }
    cout<<dem;
    return 0;
    
}