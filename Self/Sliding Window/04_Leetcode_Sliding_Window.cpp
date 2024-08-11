    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>ans;
        int maxi = INT_MIN;
        list<int>l;
        int start = 0;
        int end = 0;
        int n = nums.size();
        while(end < n){
            
            while(!l.empty() && l.back()<nums[end]){
                l.pop_back();
            }
            l.push_back(nums[end]);

            if((end-start+1)< k ){
                end++;
            }
            else if((end-start+1)== k){

                ans.push_back(l.front());

                if(nums[start]== l.front()){
                    l.pop_front();
                }
                start++;
                end++;
            }
        }
        return ans;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(K)
