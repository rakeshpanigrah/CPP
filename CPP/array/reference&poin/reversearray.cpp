#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n = 5;
    int x[n] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n / 2; i++)
    {
        int *p = &x[i];
        int *q = &x[n - i - 1];
        if (*p != *q)
        {
            swap(p, q);
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << x[j] << " ";
    }
    return 0;
}