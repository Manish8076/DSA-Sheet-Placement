

class Solution {
public:
    
bool isSymmetricUtil(TreeNode * root1, TreeNode * root2) {
  if (root1 == NULL || root2 == NULL)
    return root1 == root2;

  bool ans = false;


  bool left1 = isSymmetricUtil(root1->left, root2->right);
  bool right1 =  isSymmetricUtil(root1 -> right, root2 -> left);

   if(root1->val == root2->val && left1 && right1){
      ans = true;
  }


  return ans;
}
    bool isSymmetric(TreeNode* root) {
      if(root==NULL){
          return true;
      }
      return isSymmetricUtil(root->left, root->right);
    }
};
