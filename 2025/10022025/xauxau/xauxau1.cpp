/*#include <bits/stdc++.h>
using namespace std;

vector<int> calculatePrefixSum(const string& s) 
{
    int n = s.length();
    vector<int> prefixSum(n + 1, 0);
    for(int i = 1; i <= n; i++) 
    {
        prefixSum[i] = prefixSum[i-1] + (s[i-1] - '0');
    }
    return prefixSum;
}

bool equalPrefix(const string& s, const string& t, int len) 
{
    for(int i = 0; i < len; i++) 
    {
        if(s[i] != t[i]) return false;
    }
    return true;
}

bool equalSuffix(const string& s, const string& t, int start_s, int start_t, int len) 
{
    for(int i = 0; i < len; i++) 
    {
        if(s[start_s + i] != t[start_t + i]) return false;
    }
    return true;
}

pair<int,int> solveSubstringReplacement(string s, string t) 
{
    int n = s.length();
    int m = t.length();
    
    if(s == t) return {1, 1};
    
    vector<int> prefixSum = calculatePrefixSum(s);
    
    int prefixLen = 1;
    int suffixLen = 1;
    
    for(int i = 0; i + m <= n; i++) 
    {

        if(!equalPrefix(s.substr(i), t, prefixLen)) continue;
        if(!equalSuffix(s, t, i + m - suffixLen, m - suffixLen, suffixLen)) continue;
        int midStart = i + prefixLen;
        int midEnd = i + m - suffixLen - 1;
        int midSum = prefixSum[midEnd + 1] - prefixSum[midStart];
        int targetMid = t[prefixLen] - '0';
        if(midSum == targetMid) 
        {
            return {midStart + 1, midEnd + 1}; 
        }
    }
    return {-1, -1};
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string s, t;
    cin >> s >> t;
    
    pair<int,int> result = solveSubstringReplacement(s, t);
    cout << result.first << " " << result.second << endl;
    
    return 0;
}
    */
#include <bits/stdc++.h>
using namespace std;
int n;
string s,t;
int main()
{
    
}