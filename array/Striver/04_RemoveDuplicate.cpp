    int removeDuplicates(vector<int>& nums) {

        // vector<int>temp;

        // temp.push_back(nums[0]);

        // for(int i =1; i<nums.size(); i++){
        //     if(nums[i] != temp.back()){
        //         temp.push_back(nums[i]);
        //     }
        // }
        // nums = temp;

        // return nums.size();

        int i =0; 
        for(int j =1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
