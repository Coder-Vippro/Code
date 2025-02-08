#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
int main()
{
    cin>>n;
    unsigned long long i=2;
    while(n>1)
    {
        if(n%i==0)
        {
            cout<<i;
            n/=i;
            if(n>1)
            {
                cout<<"*";
            }
        }
        else
        {
            i++;
        }
    }
}