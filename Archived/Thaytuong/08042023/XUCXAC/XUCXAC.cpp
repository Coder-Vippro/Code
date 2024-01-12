#include <iostream>

using namespace std;

int main() 
{
    freopen("XUCXAC.inp","r",stdin);
    freopen("XUCXAC.out","w",stdout);
    long long n;
    cin >> n;
    long long tong = 0; 
    tong=n/4*14;
    if(n%4==1)tong+=1;
    if(n%4==2)tong+=5;
    if(n%4==3)tong+=11;
    cout<<tong;
    return 0;
}