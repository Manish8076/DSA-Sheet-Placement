    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long sum = INT_MIN;
        long long temp = 0;
        
        long long start = 0;
        long long end = 0;
        
        for(int i = 0; i<K;i++){
            temp = temp + Arr[i];
        }
        
        while(end<N){
            sum = max(sum,temp);
            temp = temp-Arr[start];
            start++;
            end++;
            temp = temp+Arr[end];
        }
        
        // while(end<N){
        //   temp = temp + Arr[end];
        //   if((end-start)+1 < K){
        //       end++;
        //   }
        //   else if((end-start)+1 == K){
        //       sum = max(sum,temp);
        //       temp = temp -Arr[start];
        //       start++;
        //       end++;
               
        //   }
        // }
         return sum;
        
    }

// Time Complexity :- O(N)
// Sapce Complexity :- O(1)
