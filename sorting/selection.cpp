#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void select(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int index = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                index = j;
            }
        }
       swap(arr[i],arr[index]);
    }

    for(int m =0;m<n;m++){
        cout<<arr[m]<<" ";
    }
}
int main()
{
    int arr[4] = {4,3,2,1};
    select(arr,4);
    return 0;
}