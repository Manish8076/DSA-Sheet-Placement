

    void segregateElements(int arr[],int n)
    {
        // Your code goes here
      int temp[n];
      int start = 0;
      for(int i=0; i<n; i++){
          if(arr[i] >= 0){
              temp[start] = arr[i];
              start++;
          }
      }
      
      for(int i=0; i<n; i++){
          if(arr[i] < 0){
              temp[start] = arr[i];
              start++;
          }
      }
      
      
      for(int i=0; i<n; i++){
          arr[i] = temp[i];
      }
      
      
    }

// Time Complexity :- O(n)
// Space Complexity :- O(N)
