    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        // vector<int>ans;
        // vector<int>pos;
        // vector<int>neg;

        // for(int i=0; i<n; i++){
        //     if(nums[i]>0){
        //         pos.push_back(nums[i]);
        //     }
        //     else{
        //         neg.push_back(nums[i]);
        //     }
        // }

        // int i=0;
        // int j =0;

        // while(i<n/2 || j< n/2){
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[j]);
        //     i++;
        //     j++;
        // }

        int pos=0;
        int neg=1;

        vector<int>ans(n,0);

        for(int i=0; i<n; i++){
            if(nums[i]<0){
                ans[neg] = nums[i];
                neg +=2;
            }
            else{
                ans[pos] = nums[i];
                pos +=2;
            }
        }


        return ans;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(N)
