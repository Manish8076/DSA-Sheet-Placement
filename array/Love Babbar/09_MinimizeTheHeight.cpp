

    int getMinDiff(int arr[], int n, int k) {
        // code here
          sort(arr, arr + n);
        
        int diff = arr[n-1] - arr[0];
        
        int mini, maxi;
        
        for(int i =1; i<n; i++){
            if(arr[i]-k <0){
                continue;
            }
            
            maxi  = max( arr[i-1] + k, arr[n-1]-k);
            
            mini = min(arr[0]+k, arr[i]-k);
            
            diff = min(diff, maxi-mini);
        }
        
        return diff;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)

