#include <bits/stdc++.h>
using namespace std;
string s,k;
int tmp;
bool bl=false;
int main()
{
    //freopen("TIMVT.inp","r",stdin);
    //freopen("TIMVT.out","w",stdout);
    getline(cin,k);
    getline(cin,s);
    tmp=0;
    while(1>0)
    {   
        if(s.find(k,tmp)<s.size())
        {
            bl=true;
            tmp=s.find(k,tmp)+1;
        }
        else
        {
            if(bl==true)
            cout<<tmp;
            else cout<<-1;
            return 0;
        }
    }
    
}