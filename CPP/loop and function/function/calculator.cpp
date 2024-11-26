#include <iostream>
using namespace std;
int main()
{
    cout << "** Welcome To The Mini Calculator **" << endl
         << "enter any two number: ";
    int num1, num2, opr;
    cin >> num1 >> num2;
    cout << "1.addition, 2.subraction,3.division,4.mod " << endl;
    cin >> opr;
    switch (opr)
    {
    case 1:
        cout << num1 + num2;
        break;
    case 2:
        cout << num1 - num2;
        break;
    case 3:
        cout << num1 / num2;
        break;
    case 4:
        cout << num1 % num2;
        break;
    default:
        cout << "enter any one operator";
        break;
    }

    return 0;
}