#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;int s=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s*=i;
    }
    cout<<s;
    return 0;
}
