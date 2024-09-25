    void insert(int arr[], int i)
    {
        //code here
        while(i>0 && arr[i-1]>arr[i] ){
            swap(arr[i],arr[i-1]);
            i--;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i =0; i<n; i++){
            insert(arr,i);
        }
    }

// Time Complexity :- O(N^2)
// Space Complexity :- O(1)
