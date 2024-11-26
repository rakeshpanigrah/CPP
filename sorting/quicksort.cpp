#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s, int e){
    int pivot = arr[s];
    int c =0;
    for(int i =s+1;i<=e;i++){
        if(arr[s]>arr[i]){
            c++;
        }
    }
    int pi = s+c;
    swap(arr[s],arr[pi]);
    int i = s,j=e;
    while(i<pi&&pi<j){
        while(arr[i]<pivot){ i++;};
        while(pivot<arr[j]){ j--;};

        if(i<pi&&pi<j){ swap(arr[i++],arr[j--]);};

    }

    return pi;
}

void quicksort(int arr[], int s ,int e){
    if(s<e){
        int p = partition(arr,s,e);

        quicksort(arr,s,p-1);
        quicksort(arr,p+1,e);
    }
}
int main()
{
    int arr[] = {4,0,8,1,7,4};
     int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int x=0 ; x<n;x++){
        cout<<arr[x]<<" ";
    }cout<<endl;
    return 0;
}