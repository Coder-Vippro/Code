#include <bits/stdc++.h>
#include <chrono>
using namespace std;
int xoa=0;
int a[100001]; 
int n;
int tmp=1,tmp1;
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    freopen("DAYDEP.inp","r",stdin);
    freopen("DAYDEP.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    a[n+1]=1000000001;
    tmp1=a[1];
    for(int i=2;i<=n+1;i++)
    {
        if(a[i]==a[i-1])
        {
            tmp++;
        }
        else
        {
            if(tmp!=tmp1)
            {
                xoa+=tmp;
            }
            tmp1=a[i];
            tmp=1;
        }
    }
    cout<<xoa<<' ';
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by function: " << duration.count() / 1000000.0 << " seconds" << std::endl;
    return 0;
}