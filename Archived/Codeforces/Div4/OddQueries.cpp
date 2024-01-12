#include <iostream>
using namespace std;
int n;
int b,l,r,k,h;
int a[1000001];
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>b>>h;
        for (int i = 1; i <= b; i++)
        {
            cin>>a[i];
        }
        while(h--)
        {
            cin>>l>>r>>k;
            if((r-l)*k%2==1)
            {
                cout<<"YES"<<'\n';
            }
            else cout<<"NO"<<'\n';
        }
    }
}