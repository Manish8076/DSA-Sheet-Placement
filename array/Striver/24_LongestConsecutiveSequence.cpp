
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        if(n == 0){
            return 0;
        }
        unordered_set<int>st;

        for(int i=0; i<n ; i++){
            st.insert(nums[i]);
        }
        for(int i=0; i<n; i++){
            if(st.find(nums[i]-1) != st.end()){
                continue;
            }
            else{
                int count = 0;
                int current = nums[i];

                while(st.find(current)!=st.end()){
                    count++;
                    current++;
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }


// Time Complexity: O(n^2) (worst case)
// Space Complexity: O(n)

