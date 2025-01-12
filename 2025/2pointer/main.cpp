#include <bits/stdc++.h>
using namespace std;
int a[100001];
int b[100001];
vector <int> c;
int n,k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=k;i++)
    {
        cin>>b[i];
    }
    int l=1;
    int r=1;
    while(r<=n || l<=k)
    {
        if(a[r]<b[l])
        {
            if(r==n+1)
            {
                c.push_back(b[l]);
                l++;
            }
            else 
            {
                c.push_back(a[r]);
                r++;
            }
        }
        else if(a[r]>b[l])
        {
            if(l==n+1)
            {
                c.push_back(a[r]);
                r++;
            }
            else 
            {
                c.push_back(b[l]);
                l++;
            }
        }
        else
        {
            c.push_back(a[r]);
            if(l==k+1)r++;
            else if(r==n+1)l++;
            else
            {
                r++;
                l++;
            }
        }
    }
    for(int i=0;i<int(c.size());i++)
    {
        cout<<c[i]<<' ';
    }
    return 0;
}