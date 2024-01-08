#include <bits/stdc++.h> 
using namespace std;
#define N int (1e7)
int p[N+2];
void sangngto (int n) 
{
    fill(p,p+n+1,1); 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
pair <int,int> a[10000001];
int n,t,b;
int k=10000001;
int main()
{
    cin>>n;
    sangngto(k);
    while(k--)
    {
        bool check=true;
        for(int i=2;i<=k;i++)
        {
            if(k%2==1)
            {
                a[k].first=-1;
                a[k].second=-1;
                break;
            }
            for(int j=2;j<=k;j++)
            {
                if(p[i]==1 && p[j]==1 && i+j==k)
                {
                    check=false;
                    a[k].first=i;
                    a[k].second=j;
                    break;
                }
                if(check==false)break;
            }
            if(check==true)
            {
                a[k].first=-1;
                a[k].second=-1;
            }
        }
    }
    while(n--)
    {
        cin>>t;
        if(a[t].first!=-1)
        {
            cout<<a[t].first<<' '<<a[t].second;
        }
        else cout<<"NO";
    }
    
}