#include <bits/stdc++.h>
using namespace std;
int t;
string s;
string d;
string tmp;
int dem = 0;
int k;
int a[1000001];
int binarysearch1(int b, int c, int d)
{
    int h=(b+c)/2;
    if(d==a[h])
    {
        return h;
    }
    while(b<=c)
    {
        h=(b+c)/2;
        if(d==a[h])
        {
            return h;
        }
        else if(a[h]>d)
        {
            c=h-1;
        }
        else 
        {
            b=h+1;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+t);
    cout<<binarysearch1(1,t,3);
    return 0;
}




