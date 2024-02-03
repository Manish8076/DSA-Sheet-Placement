




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

        k = k%n;

        reverse(nums, 0, n-k-1);
        reverse(nums,n-k, n-1);
        reverse(nums, 0, n-1);
        
        
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
