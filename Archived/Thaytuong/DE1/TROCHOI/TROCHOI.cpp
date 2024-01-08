#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    //ifstream fin("TROCHOI.INP");
    //ofstream fout("TROCHOI.OUT");
    int K;
    cin >> K;
    int N;
    for (int i = 0; i < K; i++)
    {
        cin >> N;
        int energy = 0;
        while (N > 0)
        {
            if (N % 2 == 0)
            {
                N /= 2;
                energy += N;
            }
            N--;
        }
        cout << energy << endl;
    }
    
    return 0;
}
