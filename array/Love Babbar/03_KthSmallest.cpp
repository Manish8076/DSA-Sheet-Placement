

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        priority_queue<int>pq;
        
        int n = r-l+1;
        
        for (int i= 0; i<k ;i++){
            pq.push(arr[i]);
        }
        
        for(int i= k; i<n ;i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        return pq.top();
    }

// Time Complexity :- O(n logK)
