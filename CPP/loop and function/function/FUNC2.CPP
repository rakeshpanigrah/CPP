#include <iostream>
using namespace std;
int fibo(int num)
{
    int a = 0, b = 1, s;
    for (int i = 1; i <= num; i++)
    {
        s = a + b;
        a = b;
        b = s;
    }
    return s;
}
int bitscount(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1 == 1)
        {
            count = count + 1;
        }
        a >>= 1;
    }
    return count;
}
int main()
{
    int c, d;
    cout << "enter the two binary number " << endl;
    cin >> c >> d;
    cout << "the total number of set bitsis: " << bitscount(c) + bitscount(d);
    return 0;
}