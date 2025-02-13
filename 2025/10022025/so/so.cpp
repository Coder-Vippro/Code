#include <bits/stdc++.h>
using namespace std;
pair<int, int> findPositions(const string& s, const string& t) 
{
    int n = s.length();
    int m = t.length();
    int start = -1, end = -1;
    for (int i = 0; i < n; ++i) 
    {
        if (s[i] != (i < m ? t[i] : '0')) 
        {
            if (start == -1) 
            {
                start = i;
            }
            end = i;
        }
    }
    if (start == -1) 
    {
        return {-1, -1}; 
    }
    return {start, end};
}
pair<int,int> ans(string s,string k)
{
    int n=s.size();
    int m=k.size();
    int start=-1,end=-1;
    int tong1=0;
    int tong2=0;
    int h=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=k[h])
        {
            tong1+=s[i]-'0';
            tong2+=k[h]-'0';
            start=i;
            while(true && i<n)
            {
                if(tong1==tong2) break;
                if(tong1<tong2)
                {
                    i++;
                    tong1+=s[i]-'0';
                }
                if(tong2<tong1)
                {
                    if(h<m-1)
                    {
                        
                    }
                }
            }
        }
        if(h<m-1) h++;
    }
}
string s, t;
int main() 
{
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);    
    cin >> s;
    cin >> t;
    pair<int, int> result = findPositions(s, t);
    if (result.first != -1 && result.second != -1) 
    {
        if(s[s.size()-1]!=t[t.size()-1])
        cout << result.first+1 << " " << result.second+1;
        else cout << result.first+1 << " " << result.second;
    } 
    else 
    {
        cout <<1<<' '<<1;
    }
    return 0;
}
