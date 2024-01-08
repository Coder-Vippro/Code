#include <bits/stdc++.h> 
using namespace std; 
int a[100001];
vector <long long> tong1;
vector <long long> tong2;
bool bl=false;
int k=1;
int n;
int binarySearch(int x) 
{
   int l = 1;
   int r = tong2.size() - 1;
   while (l <= r) {
      int mid = l + (r - l) / 2;

      if (tong2[mid] == x)
         return mid;

      if (tong2[mid] < x)
         r = mid - 1;

      else
         l = mid + 1;
   }

   return -1;
}
int main()
{
    //clock_t start, end;   
    //double time_use;      
    //start = clock(); 
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DAYSO.inp","r",stdin);
    freopen("DAYSO.out","w",stdout);
    cin>>n;
    tong1.push_back(0);
    tong2.push_back(0);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        tong1.push_back(tong1[i-1]+a[i]);
    }
    for(int i=n;i>=1;i--)
    {
        tong2.push_back(tong2[k-1]+a[i]);
        k++;
    }
    reverse(tong2.begin()+1,tong2.end());
    for(int i=1;i<tong1.size();i++)
    {
        int h=binarySearch(tong1[i]);
        if(h>0 && i<h)
        {
            cout<<i<<' '<<h<<'\n';
            bl=true;
        }
    }
    if(bl==false)
    {
        cout<<-1<<' '<<-1;
    }
    //end = clock();
    //time_use = (double)(end - start) / CLOCKS_PER_SEC;
    //cout << "Thoi gian chay: " << time_use << "s" << endl;
}
