// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Write C++ code here
    int n, c;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        c = 0;
        int r = sqrt(i);
        for (int j = 2; j <= r; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}