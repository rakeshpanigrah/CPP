#include <iostream>
#include <cmath>
using namespace std;
/* In your code, the issue might be arising due to the condition i == n in the if statement.
This condition will never be true because the loop runs until i becomes greater than sqrt(n),
which means it will never reach n.*/
int main()
{
    int n;
    cin >> n; // Input the number

    n++; // Increment n to check for the next number
    while (true)
    {
        int sqr = sqrt(n);
        bool isPrime = true;
        for (int i = 2; i <= sqr; i++)
        { // Loop to check if n is divisible by any number less than n
            if (n % i == 0)
            {
                isPrime = false;
                break; // If n is divisible by i, break the loop
            }
        }
        if (isPrime)
        {              // If no number less than n divides n, then it is prime
            cout << n; // Output the prime number
            break;     // Break out of the loop
        }
        n++; // If n is not prime, increment n and continue checking
    }

    return 0;
}
