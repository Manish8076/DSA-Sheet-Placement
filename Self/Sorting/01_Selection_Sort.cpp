    int select(int arr[], int i,int n)
    {
        int index = 0;
        int mini = INT_MAX;
        for(int j = i; j<n; j++){
            if(arr[j]<mini){
                mini = arr[j];
                index = j;
            }
        }
        return index;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i =0; i<n; i++){
           int index = select(arr,i,n);
           swap(arr[i],arr[index]);
       }
    }

// Time Complexity :- O(N^2)
// Space Complexityy :- O(1)
