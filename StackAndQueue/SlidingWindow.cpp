
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

     vector<int>ans;
     deque<int>d;

     for(int i=0; i<k; i++){

         while(!d.empty() && d.back()<nums[i]){
             d.pop_back();
         }
         d.push_back(nums[i]);
     }
     ans.push_back(d.front());
     for(int i =k ; i<nums.size(); i++){
         if(d.front()==nums[i-k])d.pop_front();
        while(!d.empty() && d.back()<nums[i]){
             d.pop_back();
         }
         d.push_back(nums[i]);
        ans.push_back(d.front());
     }
     return ans;   
    }
};
