#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // Input the number

    n++;
    // Increment n to check for the next number
    // int c =0;
    while (true)
    {
        int i, c = 0;
        for (i = 2; i < n; i++)
        { // Loop to check if n is divisible by any number less than n
            if (n % i == 0)
            {
                c++;
            } // If n is divisible by i, break the loop
        }
        if (c == 0)
        {              // If no number less than n divides n, then it is prime
            cout << n; // Output the prime number
            break;     // Break out of the loop
        }
        else
        {
            n++;
        } // If n is not prime, increment n and continue checking
    }

    return 0;
}