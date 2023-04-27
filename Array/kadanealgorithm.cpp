#include<bits/stdc++.h>
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
          int local_max = 0;
    int global_max = INT_MIN;
   // int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < n;i++)
	{   
	    local_max = max(arr[i], arr[i] + local_max);
        
	    if(local_max > global_max)
	    {
	        global_max = local_max; 
	    }
	    
	}
     return global_max;   
        
    }
};
