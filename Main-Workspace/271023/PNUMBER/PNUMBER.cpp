#include <bits/stdc++.h> 
using namespace std; 
string a;
bool check(string a)
{
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!='8' && a[i]!='6')return false;
    }
    return true;
}
int n;
int dem=0;
int main()
{
    freopen("PNUMBER.inp","r",stdin);
    freopen("PNUMBER.out","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(check(a)==true)
        dem++;
    }
    cout<<dem;
}