#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bubble(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        bool noswap = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                noswap = true;
            }
        }
        
        if(noswap==false){
            break;
        }
    }
      cout<<"After sorting: \n";
    for(int m=0;m<n;m++){
        cout<<arr[m]<<" ";
    }
}
int main()
{
    int x[] = {6,5,4,3,2,1};
    int n = sizeof(x)/sizeof(x[0]);
     cout<<"Before sorting: \n";
     for(int i : x){
        cout<<i<<" ";
     }
     cout<<endl;
    bubble(x,n);
    return 0;
}
