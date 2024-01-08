#include <bits/stdc++.h>
using namespace std;
vector <int> duong;
vector <int> am;
int n;
int x;
bool cmp(int A, int B)
{
    return A > B;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>=0)
        {
            duong.push_back(x);
        }
        else am.push_back(x);
    }
    sort(duong.begin(),duong.end());
    sort(am.begin(),am.end(),cmp);
    for(int i=0;i<duong.size();i++)
    {
        cout<<duong[i]<<' ';
    }
    for(int i=0;i<am.size();i++)
    {
        cout<<am[i]<<' ';
    }
}