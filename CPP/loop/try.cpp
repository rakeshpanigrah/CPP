#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    // int s = 0;
    while (i <= n)
    {
        int s = 0;
        while (s < n)
        {
            cout << " ";
            int j = 1;
            while (j <= n - s)
            {
                cout << n - j + 1 << " ";
                j++;
            }
            cout << endl;
            s++;
        }
        i++;
    }
    return 0;
}
