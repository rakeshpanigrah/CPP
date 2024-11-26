#include <iostream>
using namespace std;
int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {4, 8, 3, 4, 5};
    /* int *p = arr;
     int *q = p + 1;
     cout << *(p + 1) << " " << *(q + 1);*/
    int *p = arr;
    // p[0] = &arr[0];
    cout << p[1];
    arr[1] = 22;
    cout << p[1];
    return 0;
}