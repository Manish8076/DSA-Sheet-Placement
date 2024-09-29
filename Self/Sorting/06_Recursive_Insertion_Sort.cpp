    void insert(int arr[], int i)
    {
        //code here
        while(i>0 && arr[i]<arr[i-1]){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            i--;
        }
        
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        // base case
        if(n ==1) return;
        
        insertionSort(arr,n-1);
        
        insert(arr,n-1);
        
    }
// Time Complexity :- O(N^N)
// Space Complexity :- O(1)
