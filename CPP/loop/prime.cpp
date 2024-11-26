#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter a number\n";
    cin >> num;

    // Handling special cases for 0 and 1
    if (num <= 1)
    {
        cout << "It is not a prime number";
        return 0;
    }

    int limit = sqrt(num); // Calculate the square root of the number

    for (int i = 2; i <= limit; i++)
    {
        if (num % i == 0)
        {
            count++;
            break; // Break the loop if a factor is found
        }
    }

    if (count == 0)
    {
        cout << "It is a prime number";
    }
    else
    {
        cout << "It is not a prime number";
    }

    return 0;
}
