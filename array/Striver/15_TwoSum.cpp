

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>ans;
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n; i++){
            if(mp.find(target - nums[i]) != mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                break;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return ans;
    }


// Time Complexity :- O(N)
// Space Complexity :- O(N)
