


    long long maxSubarraySum(int arr[], int n){
        
        // Your code here

        int maxi = INT_MIN;
        int temp =0;
        for(int i =0; i<n; i++){
            temp = max(arr[i] ,temp + arr[i]);

             maxi = max(temp, maxi);
            
        }
        
        return maxi;        
    }


// Time Complexity := O(N)
// Space Complexity :- O(1)
