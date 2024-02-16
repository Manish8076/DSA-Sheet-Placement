
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int temp = 0;

        for(int i =0; i<nums.size(); i++){
            temp = max(nums[i], nums[i]+temp);
            maxi = max(temp,maxi);
        }
        return maxi;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
