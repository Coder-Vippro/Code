#include <bits/stdc++.h>
using namespace std;
double a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a + b > c || a + c > b || b + c > a)
    {
        double p = (a + b + c) / 2;
        cout << fixed << setprecision(2) << p * 2 << '\n';
        cout << fixed << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p - c)) << '\n';
        cout << fixed << setprecision(2) << 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / a << '\n';
        cout << fixed << setprecision(2) << sqrt(2 * b * b + 2 * c * c - a * a) / 2 << '\n';
        cout << fixed << setprecision(2) << (2 / (b + c)) * sqrt(b * c * p * (p - a)) << '\n';
        cout << fixed << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p - c)) / p << '\n';
        cout << fixed << setprecision(2) << a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    }
    else
        cout << "These are not three sides of a triangle";
}