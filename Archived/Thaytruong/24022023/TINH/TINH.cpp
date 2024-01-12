#include <bits/stdc++.h> 
using namespace std;
int a[100001];
int n;
int minn=1e9+1;
int kq=1e9;
int tong=0;
int bk;
bool bl=false;
int main()
{
    freopen("TINH.INP","r",stdin);
    freopen("TINH.OUT","w",stdout);
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]=abs(a[i]-i);
            if(a[i]<minn)
            {
                minn=a[i];
            } 
            tong=tong+a[i];
        }
        int tmp=tong;
        if(tong==tmp)
        {
            minn--;
            for(int i=1;i<=n;i++)
            {
                tong=abs(tong-minn);
            }
            if(tong<minn)
            {
                bl=false;
                bk=minn;
                tmp=tong;
                while(minn-- && tmp>=tong)
                {
                    for(int i=1;i<=n;i++)
                    {
                        tong=abs(tong-minn);
                    }
                    tmp=tong;
                }
                
            }
            else
            {
                bl=true;
                minn=bk;
                tmp=tong;
                while(minn++ && tmp>=tong)
                {
                    for(int i=1;i<=n;i++)
                    {
                        tong=abs(tong-minn);
                    }
                    tmp=tong;
                }
                
            }
        }
        if(bl==true)cout<<minn-1;
        else cout<<minn+1;
        return 0;
}
