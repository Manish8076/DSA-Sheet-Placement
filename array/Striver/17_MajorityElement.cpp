
    int majorityElement(vector<int>& nums) {

        int count =1; 
        int res = 0;
        int n = nums.size();
      // Pehle loop element find karne ke liye 
        for(int i=1; i<n; i++){
            if(nums[res] == nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count ==0){
                count = 1;
                res = i; 
            }
        }
         count = 0;
      // Doosra loop jo elment mila hai uska count pata karne ke liye
         for(int i=0; i<n; i++){
             if(nums[res] == nums[i]){
                 count++;
             }
         }
         if(count<=(n/2)){
             return -1;
         }
         else{
             return nums[res];
         }
    }

// Time Complexity : O(N)
// Space Complexity : O(1)
