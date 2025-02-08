#include <bits/stdc++.h>
using namespace std;
int result [5000001];
int a[5000001];
stack <pair<int,int>> st;
int n;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        while(!st.empty()&&st.top().first>=a[i]) st.pop();
        if(st.empty()) result[i]=0;
        else result[i]=st.top().second;
        st.push({a[i],i});
    }
    for(int i=1;i<=n;i++) cout<<result[i]<<" ";
    return 0;
}