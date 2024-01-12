<<<<<<< HEAD
<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;
int k;
string s;
int main()
{
    //freopen("MAHOA.INP","r",stdin);
    //freopen("MAHOA.OUT","w",stdout);
    cin>>k;
    cin.ignore();
    while(true)
    {
        getline(cin,s);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                s[i]=char(s[i]+k);
            }
        }
        cout<<s<<'\n';
    }
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;
int k;
string s;
int main()
{
    freopen("MAHOA.INP","r",stdin);
    freopen("MAHOA.OUT","w",stdout);
    cin>>k;
    while(getline(cin,s))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                s[i]=char(s[i]+k);
            }
        }
        cout<<s<<'\n';
    }

    return 0;
}
>>>>>>> ee810352bc862f737325a9c421e7e012b9a348cf
=======
#include <bits/stdc++.h>

using namespace std;
int k;
string s;
int main()
{
    freopen("MAHOA.INP","r",stdin);
    freopen("MAHOA.OUT","w",stdout);
    cin>>k;
    while(getline(cin,s))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                s[i]=char(s[i]+k);
            }
        }
        cout<<s<<'\n';
    }

    return 0;
}
>>>>>>> ee810352bc862f737325a9c421e7e012b9a348cf
