#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int dem=0;
int main()
{
    freopen("TTHUONG.inp","r",stdin);
    freopen("TTHUONG.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        sort(s.begin(),s.end());
        if((s[s.size()-1]-48)%(s[0]-48)==0)
        {
            dem++;
        }
    }
    cout<<dem;
}
