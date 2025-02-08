#include <bits/stdc++.h>
using namespace std;
long double a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
    {
        
        long double p=(a+b+c)/2;
        long double cv=a+b+c;
        long double s=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<"La ba canh cua tam giac";
        cout<<fixed<<setprecision(3)<<"\n"<<cv<<"\n"<<s;
    }
    else cout<<"Khong la ba canh cua tam giac";
}