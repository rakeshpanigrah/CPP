#include <iostream>
using namespace std;

int *allocateAndAssign(int a)
{
    // Dynamically allocate memory for an integer
    // int *ptr = new int;
    int *p = &a;
    // Assign the given value to the allocated memory
    //  *ptr = value;

    // Return the pointer to the allocated memory
    return p;
}

int main()
{
    // Call the function to allocate memory and assign a value
    int *ptr = allocateAndAssign(5);
    //  *ptr = 9;
    // Output the value stored in the allocated memory
    cout << "The value is: " << *ptr / 3 << endl;
    // Deallocate the memory to prevent memory leaks
    // delete ptr;

    return 0;
}
