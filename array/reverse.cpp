#include<iostream>
using namespace std;
void swap (int arr[],int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        int *p = &arr[i];
        int *q = &(arr[n-i-1]);
        temp = *p;
        *p = *q;
        *q = temp;
    }

    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    } 
}
// 2nd method
 void reverse(int arr[], int n)
{
	int low = 0, high = n - 1;

	while(low < high)
	{
		int temp = arr[low];

		arr[low] = arr[high];

		arr[high] = temp;

		low++;
		high--;
	}
}

int main()
{
    int x[5] = {1,2,3,4,5};
    int n = sizeof(x)/sizeof(x[0]);
    swap(x,n);
    return 0;
}
//tc = On