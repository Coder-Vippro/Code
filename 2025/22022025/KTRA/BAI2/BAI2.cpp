#include <bits/stdc++.h>
using namespace std;
void solve(string s)
{
    stack<char> st;
    for(char i:s)
    {
        if(!st.empty() && st.top()=='S' && i=='T')
        {
            st.pop();
        }
        else st.push(i);
    }
    cout<<st.size();
}
string s;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>s;
    solve(s);
    return 0;
}