<<<<<<< HEAD
<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;
int n;
int dem=0;
int main()
{
    freopen("SUM.INP","r",stdin);
    freopen("SUM.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=j;k++)
            {
                if(n-i-j-k<=k && n-i-j-k>=1)
                {
                        dem++;
                        
                }
            }
        }
    }
    cout<<dem;
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;
int n;
int dem=0;
int main()
{
    freopen("SUM.INP","r",stdin);
    freopen("SUM.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=j;k++)
            {
                if(n-i-j-k<=k && n-i-j-k>=1)
                {
                        dem++;
                        
                }
            }
        }
    }
    cout<<dem;
    return 0;
}
>>>>>>> ee810352bc862f737325a9c421e7e012b9a348cf
=======
#include <bits/stdc++.h>

using namespace std;
int n;
int dem=0;
int main()
{
    freopen("SUM.INP","r",stdin);
    freopen("SUM.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=j;k++)
            {
                if(n-i-j-k<=k && n-i-j-k>=1)
                {
                        dem++;
                        
                }
            }
        }
    }
    cout<<dem;
    return 0;
}
>>>>>>> ee810352bc862f737325a9c421e7e012b9a348cf
