#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter the size of an array:" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "the element of an array are: ";
    for (int x : arr)
    {
        x = x * 2;
        cout << x << " ";
    }

    return 0;
}