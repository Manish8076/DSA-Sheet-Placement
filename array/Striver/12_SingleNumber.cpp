


    int singleNumber(vector<int>& nums) {

    //     map<int,int>mp;

    //     for(int i=0; i<nums.size(); i++){
    //         mp[nums[i]]++;
    //     }

    //     int ans;

    //    for(auto it : mp){
    //        if(it.second == 1){
    //            ans = it.first;
    //        }
    //    }
    //     return ans;

    int ans =0;

    for(int i=0; i<nums.size(); i++){
        ans = ans^nums[i];
    }

    return ans;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)

