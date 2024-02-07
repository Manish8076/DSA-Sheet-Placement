

    int missingNumber(vector<int>& nums) {
        int N = nums.size();

          int sum = (N * (N + 1)) / 2;
        

        for(int i=0;i<nums.size(); i++){
            sum = sum-nums[i];
        }
        return sum;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
