#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void insert(int arr[], int n){
    for(int i =1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(int m =0;m<n;m++){
        cout<<arr[m]<<" ";
    }
}
int main()
{
    int arr[4] = {4,3,2,1};
    insert(arr,4);
    return 0;
}