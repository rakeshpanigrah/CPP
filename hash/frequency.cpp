#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2,2,1,1,7,8};
    int n  = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>m;
    for(int i =0;i<n;i++){
        m[arr[i]]++;
    }

    for(int i =0;i<n;i++){
        if(m[arr[i]]!=-1){
            cout<<arr[i]<<" "<<m[arr[i]]<<endl;
            m[arr[i]]=-1;
        }
    }
    return 0;
}