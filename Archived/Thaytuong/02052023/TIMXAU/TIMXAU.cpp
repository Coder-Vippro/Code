#include <bits/stdc++.h> 
using namespace std; 
int n;
int dem=0;
int main()
{
    freopen("TIMXAU.inp","r",stdin);
    freopen("TIMXAU.out","w",stdout);
    cin>>n;
    for(char i='A';i<='Z';i++)
    {
        for(char j='A';j<='Z';j++)
        {
            for(char k='A';k<='Z';k++)
            {
                if(i!=j && i!=k && j!=k)
                dem++;
                if(dem==n)
                {
                    cout<<i<<j<<k;
                    return 0;
                }
            }
        }
    }
}