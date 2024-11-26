#include<iostream>
using namespace std;
int secondlarge(int arr[], int n){
    int large =0,small = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[large]<arr[i]){
            small = large;
            large = i;
        }

        else if(arr[i]!=arr[large]){
            if(small == -1||arr[small]<arr[i]){
                small =i;
            }
        }
    }
    return small;
}
int main()
{
    int arr[] ={7,5,2,1,9};
    int n =5;
    cout<<secondlarge(arr,n);
    return 0;
}