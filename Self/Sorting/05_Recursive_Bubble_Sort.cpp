    void bubbleSort(int arr[], int n) {
        // Your code here
        // base case
        if(n == 1) return;
        int didSort = 0;
        for(int i = 0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                didSort=1;
            }
        }
        if(didSort == 0){
            return;
        }
        
        bubbleSort(arr,n-1);
    }

// Time Complexity :- O(N^N)
// Space Complexity :- O(1)
