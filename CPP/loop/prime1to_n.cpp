#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Display a message indicating the range of prime numbers to be found
    cout << "Prime numbers from 1 to " << n << " are: ";

    // Iterate through numbers from 2 to n
    for (int i = 2; i <= n; ++i) {
        // Assume the current number i is prime
        bool isPrime = true;

        // Check divisibility from 2 to the square root of i
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                // If i is divisible by any number in this range, set isPrime to false and break the loop
                isPrime = false;
                break;
            }
        }

        // If isPrime is still true, i is a prime number, so print it
        if (isPrime) {
            cout << i << " ";
        }
    }

    // Print a newline to separate the output
    cout << endl;

    return 0;
}
