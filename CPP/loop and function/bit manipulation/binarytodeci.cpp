#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int n = 101;
    int i = 0, ans = 0;
    while (n != 0)
    {
        if (n % 10 == 1) // agar input sirf decimal hai toh use n &1 ==1 S
        {
            ans = pow(2, i) + ans;
        }
        else if (n % 10 != 0)
        {
            cout << " enter an decimal number proper way";
            return 1;
        }
        /*  else
          {
              n = n / 10;
              i++;
              continue;
          }
           agar continue use karna hai toh then also nicha jo likha woh bhi
           likhna hoga so better aap if else stick raho*/
        n = n / 10;
        i++;
    }
    cout << ans;
    return 0;
}