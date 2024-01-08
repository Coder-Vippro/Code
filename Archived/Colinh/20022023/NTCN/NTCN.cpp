#include <bits/stdc++.h> 
using namespace std; 
int dem=0;
// Helper Function
int greatest_common_divisor(int a, int b) 
{
    // calculations based on Euler's theorem
    int temp, gcd;
    if (a < b) 
    {
        temp = a;
        a = b;
        b = temp;
    }
    gcd = 1;
    while (a % b != 0) 
    {
        gcd = a % b;
        a = b;
        b = gcd;
    }
    return gcd;
}

// Main Function
int nums(int N) 
{
    int i, count = 0;
    for (i = 1; i < N; i++) 
    {
        int gcd = greatest_common_divisor(i, N); 
        if (gcd == 1) 
            count++;
        else if (gcd != 1)
            count--;
    }
    return count;
}
int main()
{
    //freopen("NTCN.INP","r",stdin);
    //freopen("NTCN.OUT","w",stdout);
    int n;
    cin>>n;
    cout<<nums(n);
}