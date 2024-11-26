#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        int low =0 ,high =N-1;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid]==0){
                high = mid-1;
            }
            
            else{
                if(arr[mid+1]==0 || mid == N-1){
                    return mid+1;
                }
                else{
                    low = mid+1;
                }
            }
        }
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends

