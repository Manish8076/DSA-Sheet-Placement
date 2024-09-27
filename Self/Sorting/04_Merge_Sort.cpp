    void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         int left = l;
         int right = mid+1;
         vector<int>temp;
         while(left<=mid && right <=r){
             if(arr[left]<=arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else{
                 temp.push_back(arr[right]);
                 right++;
             }
         }
         
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

    //  if elements on the right half are still left //
        while (right <= r) {
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i=l; i<=r; i++){
            // is step me humne temp[i-l] isliye kiya kyunki l ka index to 2,4,3 kuch bhi ho sakta hai lekin temp to humesha 0 se temp.size() tak hi rahega
            arr[i] = temp[i-l];
            
        }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if(l>=r) return;
        
         int mid = (l+r)/2;
         
         mergeSort(arr,l,mid);
         mergeSort(arr,mid+1,r);
         merge(arr,l,mid,r);
         
         
    }
// Time Complexity :- O(N^logN)
// Space Complexity :- O(N)
