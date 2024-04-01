    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int right =0,left =0;
        int ans = 0;
        unordered_map<int,int>mp;

        while(right < n){
            
            mp[nums[right]]++;

            while(left <= right && mp[nums[right]] > k ){
                mp[nums[left]]--;
                left++;
            }

            ans = max(ans, right-left+1);
            right++;

        }
        return ans;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(1)
