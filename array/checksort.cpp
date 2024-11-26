#include<iostream>
using namespace std;
bool check(int arr[],int n){
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            return false;

    }
    return true;
}
int main()
{
    int arr[] ={1,2,3,9,5} ;
    int n =5;
    if(check(arr,n)){
        cout<<"Yes";
    }
    else
    {
       cout<<"No";
    }
    
    return 0;
}