#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,11,13};
    int n  = sizeof(arr)/sizeof(arr[0]);
    unordered_set<int>s;
    for(int i =0;i<n;i++){
        s.insert(arr[i]);
    }

    int size = s.size();
    cout<<size;

    return 0;
}