#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    bool isNegative = false;
    if (n < 0)
    {
        isNegative = true;
        n = -n;
    }

    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    if (isNegative)
    {
        // If the original number was negative, invert all bits and add 1 to get two's complement
        ans = -ans;
        cout << "The binary value is: " << ans << endl;
    }
    else
    {
        cout << "The binary value is: " << ans << endl;
    }

    return 0;
}
