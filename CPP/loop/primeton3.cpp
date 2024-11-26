#include <iostream>
using namespace std;

int main()
{
    int n;

    // Prompt the user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Display a message indicating the range of prime numbers to be found
    cout << "Prime numbers from 1 to " << n << " are: ";

    // Check for the case where n is less than 2
    if (n < 2)
    {
        cout << "No prime numbers in the specified range." << endl;
        return 0;
    }

    // Iterate through numbers from 2 to n
    for (int i = 2; i <= n; ++i) // i =1 the i will also print becauce count=1 condition c<=2 true so i =2
    {
        int c = 0; // Counter for the number of factors

        // Check divisibility from 2 to the square root of i
        for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0)
            {
                c++; // Increment the counter if i is divisible by j
            }
        }

        // If c is exactly 2, i is a prime number (only two factors: 1 and i), so print it
        if (c <= 2)
        {
            cout << i << " ";
        }
    }

    // Print a newline to separate the output
    cout << endl;

    return 0;
}
