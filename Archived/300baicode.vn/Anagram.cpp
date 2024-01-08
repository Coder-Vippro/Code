#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)return true;
        else return false;
    }
};
string s,t;
int main()
{
    cout<<Solution;
}
