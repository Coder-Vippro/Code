#include <bits/stdc++.h> 
using namespace std; 
int a,b,c;
bool ktnt(long long x) //kiem tra nt kieu cu
{
    if(x<2)return false;
    if(x==2)return true;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
bool pnt (int i)
{
    while(ktnt(i)==false && i!=0)
    {
        i=i/10;
    }
    if(i>0)return false;
    return true;
}
int main()
{
    freopen("PNT.inp","r",stdin);
    freopen("PNT.out","w",stdout);
    cin>>a>>b>>c;
    if(pnt(a)==true)cout<<1<<'\n';else cout<<0<<'\n';
    if(pnt(b)==true)cout<<1<<'\n';else cout<<0<<'\n';
    if(pnt(c)==true)cout<<1<<'\n';else cout<<0<<'\n';
}
//viết 1 hàm kt nguyên tố (với a,b,c < 10^9 theo cách thông thường)
//viết 1 hàm kt pnt (ktra với i có phải là số pnt và chạy bth)