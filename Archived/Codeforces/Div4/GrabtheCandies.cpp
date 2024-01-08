#include <iostream>
#include <cstring>

using namespace std;

bool is_alternating(string s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            return false;
        }
    }
    return true;
}

bool can_transform(string s) {
    // check if s is already alternating
    if (is_alternating(s)) {
        return true;
    }
    // try transforming each character
    for (char c = 'a'; c <= 'z'; c++) {
        string t = s;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == c) {
                t[i] = '0';
            } else {
                t[i] = '1';
            }
        }
        if (is_alternating(t)) {
            return true;
        }
    }
    return false;
}
int x;
int main() 
{
    string s;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> x >> s;
        if (can_transform(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
