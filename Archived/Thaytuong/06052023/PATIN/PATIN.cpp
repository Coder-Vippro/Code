#include <bits/stdc++.h> 
using namespace std; 
int a[10001];
int n,r,q;
int vt,h;
int f[10001];
int main()
{
    cin>>n>>r>>q;
    while (n--)
    {
        cin>>vt>>h;
        if(h==1)a[r-vt]++;
        else a[vt]++;  
    }
    
}