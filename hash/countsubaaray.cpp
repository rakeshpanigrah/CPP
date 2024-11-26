#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool countsub(int arr[],int n, int value){
    int sum =0;
    unordered_set<int> s;
    for(int i =0 ; i<n;i++){
        sum +=arr[i];
        if(sum == value){
            return true;
        }

        if(s.find(sum-value)!= s.end()){
            return true;
        }

        s.insert(sum);
    }
    return false;
}
int main()
{
    int arr[] = {5,8,6,13,3,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 22;
   cout<< countsub(arr,n,k);
    return 0;
}
