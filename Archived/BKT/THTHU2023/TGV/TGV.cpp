/*#include <bits/stdc++.h> 
using namespace std; 
long long a[3001];
int n;
int dem=0;
int binarysearch(long long key)
{
    int l=1,r=n;
    int kq=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==key)
        {
            kq=mid;
            r=mid-1;
        }
        else if(a[mid]>key)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    return kq;
}
bool kt(long long a, long long b)
{
    long long k=a*a+b*b;
    long long h=sqrt(k);
    if(h*h==k)return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("TGV.inp","r",stdin);
    freopen("TGV.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(binarysearch(sqrt(a[i]*a[i]+a[j]*a[j]))!=i && binarysearch(sqrt(a[i]*a[i]+a[j]*a[j]))!=j && binarysearch(sqrt(a[i]*a[i]+a[j]*a[j]))!=-1 && kt(a[i],a[j])==true && i!=j)
            {
                dem++;
                //cout<<a[i]<<' '<<a[j]<<' '<<a[binarysearch(sqrt(a[i]*a[i]+a[j]*a[j]))]<<'\n';
            }
            //cout<<a[i]<<' '<<a[j]<<' '<<a[binarysearch(1,i,sqrt(a[i]*a[i]+a[j]*a[j]))]<<'\n';
        }
    }
    cout<<dem;

}  */
#include<bits/stdc++.h>
using namespace std;
vector <int> A;
int binarysearch(long long key)
{
    int l=0,r=A.size()-1;
    int kq=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid]==key)
        {
            kq=mid;
            r=mid-1;
        }
        else if(A[mid]>key)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    return kq;
}
int demtamgiac(vector<int>& A) 
{
    sort(A.begin(), A.end());
    int kq=0;
    int n=A.size();
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            int canhtg = A[i]*A[i] + A[j]*A[j];
            int k = binarysearch(sqrt(canhtg));
            if (k<n && A[k]*A[k]==canhtg) 
            {
                kq++;
            }
        }
    }
    return kq;
}
int n,x;
int main() 
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        A.push_back(x);
    }
    cout<<demtamgiac(A);
    return 0;
}

