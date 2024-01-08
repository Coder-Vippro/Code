#include <bits/stdc++.h>
using namespace std;
struct ICPC
{
    int tgian;
    char bai;
    string kq;
};
int n;
int tongtg;
bool kt=false;
int kq=0;
int phat=0;
int dem=0;
int main()
{
    freopen("ICPC.INP","r",stdin);
    freopen("ICPC.OUT","w",stdout);
    cin>>n;
    struct ICPC nhatky[10001];
    for(int i=1;i<=n;i++)
    {
        cin>>nhatky[i].tgian>>nhatky[i].bai>>nhatky[i].kq;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(nhatky[i].bai>nhatky[j].bai)
            {
                swap(nhatky[i].bai,nhatky[j].bai);
                swap(nhatky[i].tgian,nhatky[j].tgian);
                swap(nhatky[i].kq,nhatky[j].kq);
            }
            if(nhatky[i].bai==nhatky[j].bai)
            {
                if(nhatky[i].kq[0]=='r' && nhatky[j].kq[0]=='w')
                {
                    swap(nhatky[i].bai,nhatky[j].bai);
                    swap(nhatky[i].tgian,nhatky[j].tgian);
                    swap(nhatky[i].kq,nhatky[j].kq);
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(nhatky[i].kq[0]=='r')
        {kt=true;dem=dem+1;}
        if(nhatky[i].bai==nhatky[i+1].bai)
        {
            phat=phat+20;
            kt=false;
        }
        else
        {
            if(nhatky[i+1].kq[0]=='r')
            {
                kt=false;kq=kq+nhatky[i+1].tgian+phat;
                phat=0;
            }
        }
        if(i==n)
        {
            if(kt==false)
            {
                if(nhatky[i].bai!=nhatky[i-1].bai && nhatky[i].kq[0]=='r')
                kq=kq+nhatky[i+1].tgian;
            }
        }
        if(kt==true){kq=kq+phat+nhatky[i+1].tgian;phat=0;}
    }
    cout<<kq<<' '<<dem;
    return 0;
}