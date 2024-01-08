#include <bits/stdc++.h>

using namespace std;
string s[1001];
int h = 0;
int n, m;
int nm;
string k;
int minn = 1e9 + 1;
int sosanh(const std::string& str1, const std::string& str2) {
    int count = 0;
    int len1 = str1.length();
    int len2 = str2.length();
    int minLength = (len1 < len2) ? len1 : len2;
    
    for (int i = 1; i <= minLength; ++i) {
        if (str1[len1 - i] == str2[len2 - i] && str1[len1 - i]!='\n' && str2[len2 - i]!='\n') {
            ++count;
        } else {
            break;
        }
    }
    if(count==0)return 0;
    return count-1;
}
string clearss(string s)
{
    while(s[0]==' ')s.erase(s.begin());
    while(s[n-1]==' ')s.erase(s[n-1]);
    return s;
}
int main()
{
    freopen("LYRICS.inp", "r", stdin);
    freopen("LYRICS.out", "w", stdout);
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        cin.ignore();
        getline(cin, s[i]);        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += m)
        {
            nm = sosanh(s[i], s[j]);
            if (nm > 0)
                minn = min(sosanh(s[i], s[j]), minn);
        }
    }
    if (minn == 1e9 + 1)
    {
        cout << 0;
        return 0;
    }
    cout<<minn;
    return 0;
    
    
   
}
