/*Given a number N find the prime factorization of the number.

Example 1:

Input:
N = 100
Output:
2 2 5 5
Explanation:
100 = 2 * 2 * 5 * 5


Example 2:

Input:
N = 27
Output:
3 3 3
Explanation:
27 = 3 * 3 * 3 */

#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeFactorization(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            // int x = i;
            while (n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    printPrimeFactorization(n);
    return 0;
}