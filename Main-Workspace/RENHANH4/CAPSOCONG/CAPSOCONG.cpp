#include <bits/stdc++.h> 
using namespace std; 
int a[3];
int main()
{
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    int kq=min(a[2]-a[1],a[1]-a[0]);
    if(a[1]-a[0]==kq && a[2]-a[1]!=kq)
    {
        cout<<a[0]+kq;
        return 0;
    }
    else if(a[2]-a[1]==kq && a[1]-a[0]!=kq)
    {
        cout<<a[1]+kq;
    }
    else cout<<a[2]+kq;
}