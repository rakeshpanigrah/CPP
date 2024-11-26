#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int subarraylength(int arr[], int n, int value){
    int res=0,sum =0;
    unordered_map<int,int> mp;

    for(int i =0;i<n;i++){
        sum+=arr[i];
        if(sum==value){
           // res = max(res,i+1);
           res+=1;
        }

        if(mp.find(sum)==mp.end()){
            mp[sum] = i;
        }
        
        if(mp.find(sum-value)!=mp.end()){
            res = max(res,i-mp[sum-value]);
        }
    }

    return res;

}
int main()
{
    int arr[] = {5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<subarraylength(arr,n,5);
    
    return 0;
}