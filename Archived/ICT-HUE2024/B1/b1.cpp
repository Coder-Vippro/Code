#include <bits/stdc++.h>
using namespace std;
int a[20];
unsigned long long C(int n, int k)
{
    if(k==0 || k==n)return 1;
    else if(k==1)return n;
    else return C(n-1,k-1)+C(n-1,k);
}
long long n;
int tinh1(int k, long long n)
{
    int kq=1;
    int kqtt=0;
    int l=0;
    int i=k;
    if(n%5!=0)
    {
        while(n%5!=0)
        {
            n--;
        }
    }
    while(n>0)
    {
        a[i]=n%10;
        i--;
    }
    if(a[k]==5)
    {
        for(int i=1;i<k;i++)
        {
            if(i==1)
            {
                if(a[i]<5)
                {
                    kq=kq*a[i];
                    l++;
                }
                else {kq=kq*(a[i]-1);l++;}
            }
            else 
            {
                if(a[i]>=a[i-1])
                {
                    kq=kq*(a[i]+1-l);
                    l++;
                }
                else 
                {
                    kq=kq*(a[i]+1);
                }
            }
        }
    }
    l=0;
    kqtt+=kq;
    kq=1;
    if(a[k]==0)
    {
        for(int i=1;i<k;i++)
        {
            
            if(a[i]>=a[i-1])
            {
                kq=kq*(a[i]+1-l);
                l++;
            }
            else 
            {
                kq=kq*(a[i]+1);
            }
        }
    }
    return kqtt;
}
int main()
{
    cin>>n;
    int k=log10(n)+1;
    cout<<tinh1(k,n);
}