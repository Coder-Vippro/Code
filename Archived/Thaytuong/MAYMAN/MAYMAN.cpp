#include <bits/stdc++.h> 
using namespace std; 
vector <int> s;
int dem=0;
int vt;
void them1(int j)
{
    s[j]=s[j]+1;
    while(s[j]==10)
    {
        s[j]=0; 
        j=j-1;
        s[j]=s[j]+1;

    }
    if(s[j]==5)dem=dem+1;
    if(s[j]==6)dem=dem-1;
}
int main()
{
    freopen("MAYMAN.inp","r",stdin);
    freopen("MAYMAN.out","w",stdout);
    int n,k;
    cin>>n>>k;
    n=n+1;
    while(n>0)
    {
        s.push_back(n%10);
        n=n/10;
    }
    reverse(s.begin(),s.end());
    for(int i=0; i<s.size() ;i++)
    {
        if(s[i]==5)dem++;
        if(dem==k)vt=i;
    }
    if(dem>k)
    {
        for(int i=vt+1;i<s.size();i++)
        {
            s[i]=0;
        }
        s[vt]++;
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i];
        }
    }
    if(dem<k)
    {
        reverse(s.begin(),s.end());
        s.push_back(0);
        reverse(s.begin(),s.end());
        int i=1;
        while(dem<k && i>0)
        {
            if(s[i]<5)
            {
                s[i]=5;
                i=i-1;
            }
            if(s[i]>5)
            {
                s[i]=0;
                them1(i-1);
            }
            if(s[i]==5)
            {
                i=i-1;
            }
        }
    }
    for(int i=1;i<s.size();i++)cout<<s[i];
}