/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
Example 1:

Input: x = 123
Output: 321*/
class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;
        while (x != 0)
        {
            // if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            {
                return 0;
            }
            ans = ans * 10 + x % 10;
            x = x / 10;
        }
        return ans;
    }
};
// limit 100 input 101 ya out of limit ha by comparing it with  100 but in code
// 101*10 = 1010 diiffclt to compare so we divide by 10 1010/10 =101 now easily compare ya range sa bahar hai.
