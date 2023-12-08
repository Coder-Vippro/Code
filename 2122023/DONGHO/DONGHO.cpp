#include <bits/stdc++.h> 
using namespace std; 
int gio,phut,giay;
int main()
{
    freopen("DONGHO.inp","r",stdin);
    freopen("DONGHO.out","w",stdout);
    cin>>gio>>phut>>giay;
    int tonggiay=gio*3600+phut*60+giay;
    tonggiay++;
    if(int(tonggiay/3600)<10)
    {
        cout<<"0"<<int(tonggiay/3600)<<' ';
    }
    else cout<<int(tonggiay/3600)<<' ';
    tonggiay=tonggiay%3600;
    if(tonggiay/60<10)
    {
        cout<<"0"<<tonggiay/60<<' ';
    }
    else cout<<tonggiay/60<<' ';
    tonggiay=tonggiay%60;
    if(tonggiay<10)
    {
        cout<<"0"<<tonggiay;
    }
    else cout<<tonggiay;
}