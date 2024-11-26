#include <iostream>
using namespace std;
int main()
{
    // int x[5] = {5, 6, 8, 9, 7};
    // int a[5];
    int *a = new int[6];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (auto i = 0; i < 5; i++)
    {
        /* code */
        cout << a[i] << endl;
    }
    delete[] a;
    return 0;
}