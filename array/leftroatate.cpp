#include<iostream>
using namespace std;

int main()
{     
    int n=5,arr[n] = {1,2,3,4,5};
    int m =0,d=2;
    while(m<d){
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i-1]= arr[i];
        }
        arr[n-1] = temp;
        m++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}