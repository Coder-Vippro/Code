#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
string s="";
int main()
{
    cin>>n;
    while(n>0)
    {
        s=char(n%2+'0')+s;
        n/=2;
    }
    cout<<s<<' '<<s.size();
}