#include<iostream>
using namespace std;
int getlarge(int arr[],int n ){
    int great_num = arr[0];
    int index =0;
    for (int i = 0; i < n; i++)
    {
        if( great_num<arr[i]){
            great_num = arr[i];
            index = i;
        }
    }
   return index;
}

int main()
{
    int arr[] = {1,2,4,5,7};
    int n =5;
    cout<<getlarge(arr,n);
    return 0;
}