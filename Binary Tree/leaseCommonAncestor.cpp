
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }

        if(root->val == p->val || root->val == q->val){
            return root;
        }
       
        TreeNode *a = lowestCommonAncestor(root->left, p,q);
        TreeNode *b = lowestCommonAncestor(root->right, p,q);
        
        if(a== NULL){
            return b;
        }
        if(b==NULL){
            return a;
        }
         
         return root;
    }
};
