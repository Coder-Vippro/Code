#include <bits/stdc++.h>
using namespace std;
unordered_map <int,int>a;
int n,x;
int maxx=-1e9;
int nums;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(auto pair:a)
    {
        if(pair.second > maxx)
        {
            maxx=pair.second;
            nums=pair.first;
        }
        else if(pair.second == maxx)
        {
            maxx=pair.second;
            nums=min(nums,pair.first);
        }
    }
    cout<<nums<<' '<<maxx;
}