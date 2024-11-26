// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int maxi(int arr[], int n)
{
    int max;
    for (int i = 0; i < n; i++)
    {
        bool isMax = true; // Assume arr[i] is maximum until proven otherwise
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {                  // If arr[i] is not greater than all previous elements
                isMax = false; // Set isMax to false
                break;         // No need to continue checking, exit the loop
            }
        }
        if (isMax == true)
        {                 // If isMax is still true, arr[i] is greater than all previous elements
            max = arr[i]; // Update max
        }
    }
    return max;
}
// optimize approach
int maxi_2(int arr[], int n)
{
    int max = arr[0]; // Initialize max to the first element of the array
    for (int i = 1; i < n; i++)
    { // Start the loop from the second element
        if (arr[i] > max)
        {                 // Compare current element with max
            max = arr[i]; // Update max if current element is greater
        }
    }
    return max;
}
// distinct element 2,3,4,2,5 = 4
int distinct(int arr[], int n)
{
    int c;
    for (int i = 0; i < n; i++)
    {
        bool isMax = true; // Assume arr[i] is maximum until proven otherwise
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {                  // If arr[i] is not greater than all previous elements
                isMax = false; // Set isMax to false
                // break;         // No need to continue checking, exit the loop
            }
        }
        if (isMax == true)
        {        // If isMax is still true, arr[i] is greater than all previous elements
            c++; // Update max
        }
    }
    return c;
}
int main()
{
    // Write C++ code her
    int x[5] = {2, 35, 2, 50, 33};
    cout << " the maximun element of given array is: " << maxi_2(x, 5) << endl;
    cout << " total distinct element of given array is: " << distinct(x, 5);

    return 0;
}