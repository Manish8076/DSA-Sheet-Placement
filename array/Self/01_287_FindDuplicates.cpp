// ============================================== LEETCODE ==============================================
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // int maxi = INT_MIN;
        // int index;
        // for(auto it: mp){
        //     if(it.second > 1){
        //         return it.first;
        //     }
            
        // }
        // return -1;

      // Time Complexity :- O(N)
      // Space Compelxity :- O(N)
      
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(fast!=slow);

        slow=nums[0];
        while(slow!=fast){
            fast=nums[fast];
            slow=nums[slow];
        }
        return slow;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(1)
