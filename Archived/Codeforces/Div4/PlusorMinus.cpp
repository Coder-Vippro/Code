#include <iostream>
using namespace std;
int n,a,b,c;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(a+b==c)cout<<'+'<<'\n';
        if(a-b==c)cout<<'-'<<'\n';
    }
    
}