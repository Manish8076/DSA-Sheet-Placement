

    void reverse(vector<int>&nums, int s, int e){

        while(s<e){
            swap(nums[s],nums[e]);
            s++;
            e--;
        }

    }

    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        
        if(n==0 || n ==1){
            return;
        }

                int n = nums.size();
        
        if(n==0 || n ==1){
            return;
        }

        // Approach 1 :- Ek new vector ka use liya hai 
        
        // vector<int>temp(n);

        // for(int i=0; i<n; i++){
        //     temp[(i+k)%n] = nums[i];
        // }
        // nums = temp;
        
// Time Complexity :- O(N)
// Space Complexity :- O(N)
        
        
        // Approach 2 :- Reverse approach 
        
        k = k%n;
        reverse(nums, 0, n-k-1);
        reverse(nums,n-k, n-1);
        reverse(nums, 0, n-1);

    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)

