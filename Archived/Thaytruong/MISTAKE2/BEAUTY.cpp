<<<<<<< HEAD
<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;
int A[100001];
bool kt(int n)
{
    int dem=0;
    int dem2=0;
    while(n>0)
    {
        dem=dem+n%10;
        n=n/10;
        dem2++;
    }
    if(dem%dem2==0)
    {
        return true;
    }
    return false;
}
void mang(int n)
{
    int k=1;
    int i=1;
    while(k<n)
    {
        if(kt(i)==true)
        {
            A[k]=i;
            k++;
        }
        i++;
    }
}
int k;
int main()
{
    freopen("BEATY.INP","r",stdin);
    freopen("BEAUTY.OUT","w",stdout);
    mang(100001);
    while(cin>>k)
    {
        cout<<A[k]<<'\n';
    }
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;
int A[100001];
bool kt(int n)
{
    int dem=0;
    int dem2=0;
    while(n>0)
    {
        dem=dem+n%10;
        n=n/10;
        dem2++;
    }
    if(dem%dem2==0)
    {
        return true;
    }
    return false;
}
void mang(int n)
{
    int k=1;
    int i=1;
    while(k<n)
    {
        if(kt(i)==true)
        {
            A[k]=i;
            k++;
        }
        i++;
    }
}
int k;
int main()
{
    freopen("BEATY.INP","r",stdin);
    freopen("BEAUTY.OUT","w",stdout);
    mang(100001);
    while(cin>>k)
    {
        cout<<A[k]<<'\n';
    }
    return 0;
}
>>>>>>> ee810352bc862f737325a9c421e7e012b9a348cf
=======
#include <bits/stdc++.h>

using namespace std;
int A[100001];
bool kt(int n)
{
    int dem=0;
    int dem2=0;
    while(n>0)
    {
        dem=dem+n%10;
        n=n/10;
        dem2++;
    }
    if(dem%dem2==0)
    {
        return true;
    }
    return false;
}
void mang(int n)
{
    int k=1;
    int i=1;
    while(k<n)
    {
        if(kt(i)==true)
        {
            A[k]=i;
            k++;
        }
        i++;
    }
}
int k;
int main()
{
    freopen("BEATY.INP","r",stdin);
    freopen("BEAUTY.OUT","w",stdout);
    mang(100001);
    while(cin>>k)
    {
        cout<<A[k]<<'\n';
    }
    return 0;
}
>>>>>>> ee810352bc862f737325a9c421e7e012b9a348cf
