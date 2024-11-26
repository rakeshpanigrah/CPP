/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.



Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false*/

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
        {
            return true;
        }
        else if (n == 0 || n % 2 != 0)
        {
            return false;
        }
        // divisible by 2 hai
        int m = n / 2;

        while (m != 0)
        {
            if (m == 1)
            {
                return true; // Found a power of 2
            }
            if (m % 2 != 0)
            {
                return false; // If m becomes odd, n is not a power of 2
            }
            m /= 2;
        }

        return false;
    }
};

// 2nd method
/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<31;i++){
            int ans = pow(2,i);
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};*/

// 3 method
/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for(int i=0;i<31;i++){
            if(ans==n){
                return true;
            }
            if(ans< INT_MAX/2)
             ans = ans*2;

        }
        return false;
    }
};*/