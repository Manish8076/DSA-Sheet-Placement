    void bubbleSort(int arr[], int n) {
        // Your code here
        for(int i =0; i<n; i++){
            int didSwap = 0;
            for(int j = 0; j<(n-i-1); j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    didSwap = 1;
                }
            }
            if(didSwap == 0) break;  // This case is only if the array is already sorted then break so that complexity will be O(N)    
        }
    }

// Time Complexity :- O(N^2)
// Space Complexity :- O(1)
