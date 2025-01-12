#include <bits/stdc++.h>
using namespace std;
int dem(int x,int n)
{
    int tong=a[1];
    int r,l;
    r=l=1;
    while(r<=n)
    {
        if(tong<x)
        {
            r++;
            tong+=a[r];
        }
        else if(tong==x)
        {
            tong-=a[l];
            l++;
        }
        else
        {
            
        }
    }
}
int main()
{
    
}