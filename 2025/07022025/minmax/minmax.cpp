#include <bits/stdc++.h>
using namespace std;
string n;
int main()
{
    cin>>n;
    sort(n.begin(),n.end());
    cout<<n[0]<<' '<<n[n.size()-1];
}