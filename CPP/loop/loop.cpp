#include <iostream>
using namespace std;
int main()
{
    // print 1 to n
    /* int n;
     cout << "Enter the number \n ";
     cin >> n;
     int i = 1;//for odd & n i= 1 or even i =2
     int sum;
     while (i <= n)
     {
         cout << i << ", ";
         i = i + 1; // for  n i= 1 or odd&even i =i+2
     }*/
    // print sum of   1 to n
    /* int n;
     cin >> n;
     int i = 1; // for 1 to n &odd i=1 or even i=2
     int sum = 0;
     while (i <= n)
     {
         sum = sum + i;
         i = i + 1; // for 1 to n &odd i= i+1 or even i= i+2
     }

     cout << "the sum of 1 to n number is " << sum;*/
    // check a number is prime or not
    int n;
    cin >> n;
    int i = 2;
    if (n == 1)
    {
        cout << "it is not a prime number ";
    }
    if (n == 2)
    {
        cout << "it is a prime ";
    }
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime " << i << endl;
        }
        else
        {
            cout << " prime " << i << endl;
        }
        i = i + 1;
    }
    return 0;
}