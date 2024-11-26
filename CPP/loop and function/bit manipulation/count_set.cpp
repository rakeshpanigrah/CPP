/* Write a function that takes the binary representation of a positive integer and returns the number of
set bits
 it has (also known as the Hamming weight).
Example 1:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.*/
#include <cstdint>
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    } // do not run this code it will run only in leetcode platform
};