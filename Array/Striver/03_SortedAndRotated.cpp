

class Solution {
public:
    
     void rotate(vector<int>&nums, int k){
         int n = nums.size();
         vector<int>temp(n);
         for(int i =0; i<n; i++){
             temp[(i+k)%n] = nums[i];
         }
         nums = temp;
     }
    
     bool check(vector<int>& nums) {
           
         for(int i=0; i<nums.size()-1; i++){
             if(nums[i] > nums[i+1]){
                 rotate(nums,(nums.size()-i)-1);
             }
         }

         for(int i =0; i<nums.size()-1 ; i++){
             if(nums[i] > nums[i+1]){
                 return false;
             }
         }      
        return true;
     }
