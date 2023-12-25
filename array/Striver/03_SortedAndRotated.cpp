
// <<<<<<<<<================= Apporach 1 ============================>>>>>>>>>>>
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
                 break;
             }
         }

         for(int i =0; i<nums.size()-1 ; i++){
             if(nums[i] > nums[i+1]){
                 return false;
             }
         }      
        return true;

        // int count = 0;
        // int n = nums.size();

        // for(int i =1; i<nums.size(); i++){
        //     if(nums[i] < nums[i-1]){
        //         count ++;
        //     }
        // }

        // if(nums[n-1] > nums[0]){
        //  count++;
        // }
        // return count<=1;
    }
};



// <<<<<<<<<<================ Approach 2 ==========================>>>>>>>>>
class Solution {
public:
    

     bool check(vector<int>& nums) {

        int count = 0;
        int n = nums.size();

        for(int i =1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]){
                count ++;
            }
        }

        if(nums[n-1] > nums[0]){
         count++;
        }
        return count<=1;
    }
};
