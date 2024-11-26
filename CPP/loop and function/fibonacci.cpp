#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n;
    int sum;
    cout << "enter an positive integer" << endl;
    cin >> n;
    cout << " the fibonacci series is: "
         << " " << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    return 0;
}