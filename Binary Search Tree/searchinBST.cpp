

class Solution {
public:
      
    TreeNode* searchBST(TreeNode* root, int val) {
       
        if(root==NULL){
            return root;
        }
        TreeNode *temp;
        if(root->val == val ){
            return root;
        }
        if(val< root->val){
           temp =  searchBST(root->left, val);
        }
        else{
           temp = searchBST(root->right,val);
        }
        return temp;
   
    }
};
