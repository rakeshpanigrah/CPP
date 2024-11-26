/*The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.



Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.*/
class Solution
{
public:
  int bitwiseComplement(int n)
  {
    if (n == 0)
    {
      return 1;
    }
    int m = n;
    int mask = 0;
    while (m != 0)
    {
      mask = (mask << 1) | 1;
      m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
  }
};

/*#include <iostream>
#include<cmath>
using namespace std;

int main()
{  int n;
cin>>n;
   if(n==0){
      return 1;
    }
    int m = (~n);
    float ans =0;
    int i =0;
    while(m!=0){
      int b = m&1;
      ans = (b*pow(10,i))+ans;
      i++;
      m = m>>1;
    }
    cout<< ans;
  return 0;
}
 the above code is not used becuase ans range ka bahar jata or overflow hokar garbage value print karega
 lesson is sa ya hai ki &1 jitna baar kar raha hu utna vakue ka number of and nikal kar naya value
 banaya toh acha hoga 111*/