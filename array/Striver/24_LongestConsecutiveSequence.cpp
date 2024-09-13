
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int>st(nums.begin(), nums.end());
        int ans = 0;

        if(nums.size() == 0){
            return 0;
        }

        for(int num: nums){
            if(st.find(num-1) == st.end()){
                int length = 1;

                while(st.find(num+length) != st.end()){
                    length++;
                }
                    ans = max(ans,length);
            }
        }
        return ans;
    }


// Time Complexity: O(n)
// Space Complexity: O(n)

