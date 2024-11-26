#include <iostream>
using namespace std;
int main()
{
    int num = 8;
    int *p = &num;
    cout << *p;
    *p = 5;
    cout << *p;
    return 0;
}