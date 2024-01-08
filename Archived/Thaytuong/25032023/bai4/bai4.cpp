#include <bits/stdc++.h> 
using namespace std;
string a;
string kq=""; 
int main()
{
    freopen("bai4.inp","r",stdin);
    freopen("bai4.out","w",stdout);
    cin>>a;
    if(a.size()%2==0)
    {
        for (int i = a.size()-1; i >= 0; i--)
        {
            if(i%2==1)cout<<a[i];
        }
        for (int i = 0; i < a.size(); i++)
        {
            if(i%2==0)cout<<a[i];
        }
    }
    else
    {
        for (int i = a.size(); i >= 0; i--)
        {
            if(i%2==0)cout<<a[i];
        }
        for (int i = 0; i < a.size(); i++)
        {
            if(i%2==1)cout<<a[i];
        }
    }
}