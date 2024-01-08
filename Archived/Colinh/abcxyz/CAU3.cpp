#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,m;
int temp2=0;
int main()
{
    freopen("CAU3.INP","r",stdin);
    freopen("CAU3.OUT","w",stdout);
    cin>>a>>b>>c>>d>>m;
    int temp=a*m;
    while(m>0)
    {
        if(m>c)
        temp2=temp2+b*c;
        else if(m<c)
        temp2=temp2+b*m;
        m=m-d-c;
    }
    cout<<abs(temp-temp2);
}