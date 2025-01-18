//Bài 1: Sinh xâu nhị phân

/*


#include <bits/stdc++.h>
using namespace std;
int n;
int x[10];
void ans(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<x[i]<<' ';
    }
    cout<<'\n';
}
void sinhnhiphan(int i)
{
    if(i>n){ans(n);return;}
    for(int giatri=0;giatri<=1;giatri++)
    {
        x[i]=giatri;
        sinhnhiphan(i+1);
    }
}
int main()
{
    //backtracking
    cin>>n;
    sinhnhiphan(1);
}


*/
