

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count =0;



        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
                ans = max(ans,count);
            }
            else{
                count =0;
            }
        }
        return ans;
    }


// Time Complexity :- O(N)
// Space Complexity :- O(1)
