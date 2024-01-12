/*#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int>& queens, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (queens[i] == col || abs(queens[i] - col) == row - i)
            return false;
    }
    return true;
}

void solveNQueens(vector<int>& queens, int row, int n, vector<vector<int>>& res) {
    if (row == n) {
        res.push_back(queens);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (isValid(queens, row, col)) {
            queens[row] = col;
            solveNQueens(queens, row + 1, n, res);
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> queens(n, -1);
    vector<vector<int>> res;
    solveNQueens(queens, 0, n, res);
    cout << res.size() << endl;
    return 0;
}
*/
#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int a[N+2];
int f[N+2];
int vet[N+2];
int maxx=0;
int vt;
int main()
{
    //freopen("TANGDAN.INP","r",stdin);
    //freopen("TANGDAN.OUT","w",stdout);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        maxx=0;
        for(int j=1;j<=i-1;j++)
        {
            if(a[i]>a[j])
            {
                if(maxx<f[j])
                    maxx=f[j];
                vet[i]=a[i];    
            }
        }
        f[i]=maxx+1;
    }
    cout<<f[n]<<'\n';
    for(int i=2;i<=n;i++)
    {
        cout<<vet[i]<<' ';
    }
    return 0;
}
