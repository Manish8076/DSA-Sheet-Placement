

class Solution {
public:

    TreeNode *insert(vector<int>nums, int start, int end){
      if(start> end){
          return NULL;
      }
      int mid = (start+end)/2;
      TreeNode *root = new TreeNode(nums[mid]);

      root->left = insert(nums,start, mid-1);

      root->right = insert(nums,mid+1, end);

      return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
      int start = 0;
      int end = nums.size()-1;
      TreeNode *root = insert(nums,0, end);   

      return root;
    }
};
