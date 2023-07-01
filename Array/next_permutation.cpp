class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 0){
            return;

        }

        int ind1 = -1;

       for(int i = nums.size()-2 ; i>=0; i--){
           if(nums[i]<nums[i+1]){
               ind1 = i;
               break;
           }
       }
      
       if(ind1 <0){
           reverse(nums.begin(), nums.end());
       } 
       else{
         int ind2 =0;
         for(int i = nums.size()-1; i>=0; i--){
             if(nums[i]>nums[ind1]){
                 ind2 = i;
                 break;
             }
         }
       swap(nums[ind1], nums[ind2]);

       reverse(nums.begin()+ind1+1, nums.end());

       }

    }
};
