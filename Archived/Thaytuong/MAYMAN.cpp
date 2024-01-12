#include <bits/stdc++.h>
using namespace std;
int k,d=0,n;
vector<int> s;
void them1(int j)
{
    s[j]++;
    while(s[j]==10)
    {
        s[j]=0;
        j--;
        s[j]++;
    }
        if(s[j]==5) d++;
        if(s[j]==6)d--;
}
int main()
{
    freopen("MAYMAN.inp","r",stdin);
    freopen("MAYMAN.out","w",stdout);
    cin>>n>>k;
    n++;
    int m=n;
    while(m>0) {s.push_back(m%10);m/=10;}
    reverse(s.begin(), s.end());
    for(int i=0;i<s.size();i++)if(s[i]==5)d++;
    if(d>k){
        int w=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==5)w++;
            if(w==k+1)break;
        }
        s[w]=6;
        for(int i=w+1;i<s.size();i++)s[i]=0;
        for(int i=0;i<s.size();i++)cout<<s[i];
        return 0;
    }
    reverse(s.begin(), s.end());
    s.push_back(0);
    reverse(s.begin(), s.end());
    int i=s.size()-1;
      while(d<k && i>0){
        if(s[i]<5){s[i]=5;d++;i--;}
        else if(s[i]>5){s[i]=0;them1(i-1);}
        else if(s[i]==5){i--;}
      }
    for(int i=1;i<s.size();i++)cout<<s[i];
    return 0;
}
