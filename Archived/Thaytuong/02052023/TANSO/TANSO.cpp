#include <bits/stdc++.h> 
using namespace std; 
string s;
int main()
{
    freopen("TANSO.inp","r",stdin);
    freopen("TANSO.out","w",stdout);
    cin>>s;
    int dem0=0;
    int dem1=0;
    int dem2=0;
    int dem3=0;
    int dem4=0;
    int dem5=0;
    int dem6=0;
    int dem7=0;
    int dem8=0;
    int dem9=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='0')dem0++;
        if (s[i]=='1')dem1++;
        if (s[i]=='2')dem2++;
        if (s[i]=='3')dem3++;
        if (s[i]=='4')dem4++;
        if (s[i]=='5')dem5++;
        if (s[i]=='6')dem6++;
        if (s[i]=='7')dem7++;
        if (s[i]=='8')dem8++;
        if (s[i]=='9')dem9++;
    }
    cout<<dem0<<' '<<dem1<<' '<<dem2<<' '<<dem3<<' '<<dem4<<' '<<dem5<<' '<<dem6<<' '<<dem7<<' '<<dem8<<' '<<dem9;
}