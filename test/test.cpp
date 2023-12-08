#include <bits/stdc++.h> 
using namespace std; 
int i;
int tong=0;
int main()
{
    cin>>i;
    int scs = int(log10(i)) + 1;
    int k = i;
    int dem = 0;
    while (i > 0)
    {
        dem += pow(i % 10, scs);
        i /= 10;
    }
    if (dem == k)
        return 1;
    return 0;
}