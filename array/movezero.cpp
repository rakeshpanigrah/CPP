#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void move(int arr[],int n){
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[i], arr[c]);
            c++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main()
{
    int arr[] = {1,0,3,0,5};
    int n = 5;
    move(arr,n);
    return 0;
}